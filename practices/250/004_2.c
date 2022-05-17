/**
 * Write a program to input three real numbers that are the three sides of a triangle. Check
 * whether the three entered edges are valid or not. If valid, indicate type of triangle and
 * calculate the area of ​​the triangle.
 * 
 * Heron triangle formula:   
 *      p = ( a + b + c ) / 2
 *      sqrt(p * ( p - a ) * ( p - b ) * ( p - c ))
 */ 
#include <stdio.h>
#include <math.h>

void typeTriangle(float a, float b, float c) {
    if (a * b * c > 0 && a + b > c && a + c > b && b + c > a ) {
        unsigned f = 0;

        if (a == b || b == c || c == a) f += 1;
        if (a == b && b == c) f += 1;
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) f += 3;
        
        switch (f) {
            case 0: printf("Normal triangle\n"); break;
            case 1: printf("Isosceles triangle\n"); break;
            case 2: printf("Equilateral triangle\n"); break;
            case 3: printf("Right triangle\n"); break;
            case 4: printf("Right isosceles triangle\n");
        }
        
        float p = ( a + b + c ) / 2;
        printf("The area of ​​the triangle: %g\n", sqrt(p * (p - a) * (p - b) * (p - c)));
    } else { printf("Invalid!\n"); }
}
int main() {
    float a, b, c;
    
    printf("Enter the 3 sides of the triangle: ");
    scanf("%f%f%f", &a, &b, &c);
    typeTriangle(a, b, c);
    
    return 0;
}