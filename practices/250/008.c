/** 
 * Write a program to solve quadratic equation 2: ax2 + bx + c = 0 
 * (a, b, c enter from keyboard). Consider all possible cases.
 */ 
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Enter a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
    
    if (!a)
        if (!b) printf(c ? "No solution\n" : "Infinite solutions\n");
        else printf("x = %g\n", -c / b);
    else {
        float d = b * b - 4 * a * c;
        
        if (d > 0) printf("x1 = %g\nx2 = %g\n", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));  
        else (!d) ? printf("x1 = x2 = %g\n", -b / (2 * a)) : printf("No solution\n");
    }
    
    return 0;
}