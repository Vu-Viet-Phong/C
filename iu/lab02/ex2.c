#include <stdio.h>

int main() {
    int n, a, s;
    s = 1;

    printf("n: ");
    scanf("%d", &n);

    if (!(n % 2)) a = 2;
	else a = 1;
	
	for (int i = a; i <= n; i += 2)
		s *= i;
	
	printf("Factorial of n = %d: %d", n, s);
	
	return 0;
}