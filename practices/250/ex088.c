#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 20

int main() {
	int i, j, n;
	int arr2D[MAX][MAX];
	
	printf("Enter N < 20: ");
	scanf("%d", &n);
	
	srand(time(NULL));
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			arr2D[i][j] = rand() % 201 - 100;
		}
	}

	return 0;
}