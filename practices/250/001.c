/** 
 * Enter the area S of a sphere. Find the volume V of this sphere
 * 
 * S = 4 * Pi * (r ^ 2)
 * V = (4 * Pi * (r ^ 3)) / 3
 */ 
#include <stdio.h>
#include <math.h>

int main() {
	double S;
	 
	printf("Enter the area S of a sphere: ");
	scanf("%lf", &S);
	printf("Volume: %g\n", (4 * M_PI * pow(sqrt(S / (4 * M_PI)), 3)) / 3);
	
	return 0;
}
