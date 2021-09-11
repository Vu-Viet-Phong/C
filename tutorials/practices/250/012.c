/** Write a program to solve the system of equations with 2 unknowns:
 * 
 *      a1*x + b1*y = c1
 *      a2*x + b2*y = c2
 * 
 * The coefficients a1, a2, b1, b2, c1, c2 enter from the keyboard. 
 * Consider all specific cases
 * 
 * Hint: Use formula Cramer2
 */
#include <stdio.h>

int main() {
    float a1, a2, b1, b2, c1, c2, d, dx, dy;

    printf("Enter a1, b1, c1: ");
    scanf("%f%f%f", &a1, &b1, &c1);
    printf("Enter a2, b2, c2: ");
    scanf("%f%f%f", &a2, &b2, &c2);

    d = a1 * b2 - b1 * a2;
    dx = c1 * b2 - b1 * c2;
    dy = a1 * c2 - c1 * a2;

    if (!d) printf((!dx && !dy) ? "Infinite solution\n" : "No solution");
    else    printf("x = %g\ny = %g\n", dx / d, dy / d);

    return 0;
}