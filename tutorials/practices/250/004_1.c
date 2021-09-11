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
        if (a == b || a == c || b == c) 
            if (a == b && a == c) printf("Equilateral triangle\n"); // a = b = c
            else printf("Isosceles triangle\n");                    // a = b != c || a = c != b || b = c != a
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a )
            if (a == b || a == c || b == c) printf("Right isosceles triangle\n");
            else printf("Right triangle\n");
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