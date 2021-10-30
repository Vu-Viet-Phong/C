#include <stdio.h>

#define swap(a, b) { int t = a; a = b; b = t; }

int main() {
	int a[100];
	int n;

	do {
		printf("N : ");
		scanf("%d", &n);
	} while (n % 2);
	
	for (int i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n / 2 - 1; i++) {
		for (int j = i; j < n / 2; j++) 
			if (a[i] < a[j]) swap(a[i], a[j]);
	}

	for (int i = n / 2; i < n; i++) {
		for (int j = i; j <= n; j++) 
			if (a[i] > a[j]) swap(a[i], a[j]);
	}
	
	for (int i = 0; i < n; i++) {	
		printf("%d", a[i]);
	}
	
	return 0;
}
