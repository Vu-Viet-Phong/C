/** 
 * The program inputs the coordinates (xC, yC) that are the center of a circle, and R
 * is the radius of that circle. Enter the coordinates (xM, yM) of the point M. 
 * Determine the point M is inside, on, or outside the circle.
 */
#include <stdio.h>
#include <math.h>

int main() {
	double xC, yC, R, xM, yM, d;
	
	printf("Enter the coordinates (xC, yC) as the center of a circle: ");
	scanf("%lf%lf", &xC, &yC);
	printf("Enter radius R: ");
	scanf("%lf", &R);
	printf("Enter the coordinates M(xM, yM): ");
	scanf("%lf%lf", &xM, &yM);
	
	d = R - sqrt(pow(xM - xC, 2) + pow(yM - yC, 2));
	if (d > 0) printf("M point inside the circle\n");
	else if ( d < 0 ) printf("M point outside the circle\n");
	else printf("M is on the circle \n");
	
	return 0;
}
