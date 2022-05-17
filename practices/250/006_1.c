/**
 * Write a program to input three integers. Please print these three numbers 
 * to the screen in ascending order and use at most one auxiliary variable.
 */

#include <stdio.h>

int main() {
    int a, b, c, t;

    printf("Enter three integers a, b, c: ");
    scanf("%d%d%d", &a, &b, &c );
    
    if (a < b) { t = a; a = b; b = t; }
    if (a < c) { t = a; a = c; c = t; }
    if (b < c) { t = b; b = c; c = t; }
    
    printf("%d %d %d\n", c, b, a);
    
    return 0;
}