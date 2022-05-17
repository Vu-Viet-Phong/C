/**
 * Write a program to solve quadratic equations: ax + b = 0 
 * (a, b input from the keyboard). Consider all possible cases
 */
#include <stdio.h>

int main() {
    float a, b;

    printf("Enter a, b: ");
    scanf("%f%f", &a, &b);
    
    a && (!b && printf("Infinite solution\n") || printf("No solution\n")) || printf("x = %g\n", -b/a);
    
    return 0;
}