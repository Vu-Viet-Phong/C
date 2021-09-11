/**
 * Write a program to solve quadratic equations: 
 * ax + b = 0 (a, b input from the keyboard). Consider all possible cases
 */
#include <stdio.h>

int main() {
    float a, b;

    printf("Enter a, b: ");
    scanf("%f%f", &a, &b);
    
    if (!a) printf(b ? "No solution\n" : "Infinite solutions\n");
    // b ? printf("No solution\n") : printf("Infinite solution\n");
    else printf("x = %g\n", -b / a);
    
    return 0;
}