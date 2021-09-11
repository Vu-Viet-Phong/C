/**
 * Write a program to input three integers. Please print these three numbers 
 * to the screen in ascending order and use at most one auxiliary variable.
 */

#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a; *a = *b; *b = *t;
}

int main() {
    int a, b, c;

    printf("Enter three integers a, b, c: ");
    scanf("%d%d%d", &a, &b, &c );
    
    if (a < b) swap(&a, &b); 
    if (a < c) swap(&a, &c);
    if (b < c) swap(&b, &c);
    
    printf("%d %d %d\n", c, b, a);
    
    return 0;
}