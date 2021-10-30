#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) return 1;
    
    for (int i = 2; i <= sqrt(n); i++) 
        if (!(n % i)) return 1;

    return 0;
}

int main() {
	int n;
	
    printf("N: ");
	scanf("%d", &n);
	
    for (int i = 2; i <= n; i++) {
		if(isPrime(i)) printf("%d ", i);
	}
	
	return 0;
}

