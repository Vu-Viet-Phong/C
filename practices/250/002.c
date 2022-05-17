/**
 * Enter the coordinates of 2 points A(xA, yA) and B(xB, yB). Calculate the distance AB.
 * 
 * |AB| = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2))
 */
#include <stdio.h>
#include <math.h>

int main() {
	double xa, xb, ya, yb; 
	
	printf("A(xA, yA)? ");
	scanf("%lf %lf", &xa, &ya);
	printf("B(xB, yB)? ");
	scanf("%lf %lf", &xb, &yb);	
	printf("|AB| = %g", sqrt(pow(xb - xa, 2) + pow(yb - ya, 2)));

	return 0;
}
