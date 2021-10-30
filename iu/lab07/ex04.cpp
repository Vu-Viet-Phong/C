/*
4. Input 2 binary number using string then return the sum of those two.
Result should use string.
Ex:
 __________________________________________________________
| Input: 111  11                                           |
| Output: 1010                                             |
|__________________________________________________________|
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

void ex4(char s1[], char s2[]){
	int i = 0, remainder = 0, sum[20];  
	int binary1 = atoi(s1), binary2 = atoi(s2);
	
	while (binary1 != 0 || binary2 != 0)
    {
        sum[i++] =(binary1 % 10 + binary2 % 10 + remainder) % 2;
        remainder =(binary1 % 10 + binary2 % 10 + remainder) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    
    while (i >= 0)
        printf("%d", sum[i--]);
}

int main(int argc, char *argv[]) {
	char n1[] = "111";
    char n2[] = "1111";
    ex4(n1,n2);
		
	return 0;
}
