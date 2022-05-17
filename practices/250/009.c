/** 
 * Write a program to input x number of measures of an angle, in minutes. 
 * Give know what is the right angle of the trigonometric circle.
 * 
 *      1^o = 60' 
 *      1 radian = (180/Pi) degree
 */
#include <stdio.h>
#include <math.h>

int main() {
    double angle;

    printf("Enter the measure x of the angle (minutes): ");
    scanf("%lf", &angle);

    angle /= 60; // convert minutes to degrees
    printf("x belongs to the %d th right angle.\n", (int)ceil(angle / 90) % 4);
    printf("cos(x) = %g\n", cos(angle * M_PI / 180));
    
    return 0;
}