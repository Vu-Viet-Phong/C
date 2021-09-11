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
#define swap(a, b) { float t = a; a = b; b = t; }

void typeTriangle(float a, float b, float c) {
    /* Sort: a <= b <= c */
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);

    if (a * b * c > 0 && a + b > c) {
        // a < b < c if a = c then a = b
        if (a == c) printf("Equilateral triangle\n");
        else if ( a == b || b == c )
            /* If the triangle is right, the largest side c is the hypotenuse */
            if (a * a + b * b == c * c) printf("Right isosceles triangle\n");
            else printf("Isosceles triangle\n");
        else
            if (a * a + b * b == c * c) printf("Right triangle\n");
            else printf("Normal triangle\n");

        float p = (a + b + c) / 2;
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