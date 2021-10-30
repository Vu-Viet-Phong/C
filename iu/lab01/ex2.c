#include <stdio.h>

int main() {
    int n, min, max;
	min = max = 0;
	
	do {
		printf("input:");
		scanf("%d", &n);
		
		min = max = n;
		 
		if (n > max) max = n;
		if (n < min) min = n;
	} while (n);
	
    printf("Min: %d\nMax: %d\n", min, max);

    return 0;
}
