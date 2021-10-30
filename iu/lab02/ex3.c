#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) return 1;

    for (int i = 2; i <= sqrt(n); i++) 
        if (!(n % i)) return 1;
    
    return 0;
}

int main() {
	int n, a;

	printf("N = ");
	scanf("%d", &n);
	printf("%d = ", n);
	
	for (int i = 2; i <= n; i++) {
		if (isPrime(i)) {
			while (n % i) {
				printf("%d", i);
				n /= i;
				if (n != 1) printf(" * ");
			}
		}
	}
	
	return 0;
}
	
	
