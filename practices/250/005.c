/** 
 * Write a program to input the coordinates of the vertices of the triangle ABC and of 
 * the point M. Determine whether the point M lies inside, on the side or outside the 
 * triangle ABC.
 * 
 * S(abc) = (|xA * yB - xB * yA + xB * yC - xC * yB + xC * yA - xA * yC|) / 2
 */
#include <stdio.h>
#include <math.h>

double area(double xA, double yA, double xB, double yB, double xC, double yC) {
    return 0.5 * fabs(xA * yB - xB * yA + xB * yC - xC * yB + xC * yA - xA * yC);
}

int main() {
    double xA, yA, xB, yB, xC, yC, xM, yM;
    double d;

    printf("A(xA, yA): ");
    scanf("%lf%lf", &xA, &yA );
    printf("B(xB, yB): ");
    scanf("%lf%lf", &xB, &yB );
    printf("C(xC, yC): ");
    scanf("%lf%lf", &xC, &yC );
    printf("M(xM, yM): ");
    scanf("%lf%lf", &xM, &yM);
    
    d = area(xM, yM, xA, yA, xB, yB) + area(xM, yM, xA, yA, xC, yC)
      + area(xM, yM, xB, yB, xC, yC) - area(xA, yA, xB, yB, xC, yC);

    if (d > 0) printf("Point M lies outside of triangle ABC\n");
    else
        if (area(xM, yM, xA, yA, xB, yB) == 0 || area(xM, yM, xA, yA, xC, yC) == 0 || area(xM, yM, xB, yB, xC, yC) == 0)
            printf("Point M lies on the side of triangle ABC\n");
        else printf("Point M lies inside the triangle ABC\n");

    return 0;
}