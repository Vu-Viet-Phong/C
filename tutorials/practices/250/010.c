/**
 * Canadian Social Insurance Number (SIN) is a 9-digit number, validated as follows:
 * - The rightmost number (position 1, from the right), is the check digit.
 * - Weight is calculated from right to left (excluding check digit), equal to s1 + s2:
 * 
 * + s1 is the sum of odd-positioned numbers.
 * + Numbers with even positions are doubled. If the double result has two digits, the 
 * result issum of these two digits. s2 is the sum of the results.
 * 
 * A valid SIN has a weighted sum with the check digit divisible by 10.
 *     Example: SIN 193456787
 *      - The check digit is 7 (shaded number).
 *      - The weight is the sum of s1 and s2, with:
 *      
 *      + s1 = 1 + 3 + 5 + 7 = 16
 *      + Numbers with even positions are doubled:
 *         (9 * 2) (4 * 2) (6 * 2) (8 * 2) => 18 8 12 16
 *      
 *      s2 = (1 + 8) + 8 + (1 + 2) + (1 + 6) = 27
 *      The weight is equal to s1 + s2 = 16 + 27 = 43.
 * 
 * Since the sum of the weights with the check digit 43 + 7 = 50 is divisible by 10, the SIN is valid.
 * Write a program to input a SIN number. Check if the SIN is valid.
 * Enter 0 to exit  
 */
#include <stdio.h>

int main() {
    unsigned t, pos;
	unsigned long SIN;

    while (1) {
        printf("Enter 0 to exit\nSIN: ");
        scanf("%lu", &SIN);
		
		if (!SIN) break;
		
        unsigned sum = SIN % 10;
        SIN /= 10;

        for (pos = 0; pos < 8 && SIN > 0; SIN /= 10, pos++) {
            t = SIN % 10;

            if (pos % 2) sum += t;
            else sum += (2 * t) / 10 + (2 * t) % 10;
        }
        printf("SIN %s valid!\n", (SIN > 0 || sum % 10) ? "isn't" : "is");
    }

    return 0;
}
