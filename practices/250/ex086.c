#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 20
#define swap(a, b) { int temp = a; a = b; b = temp; }

void sort(int arr2D[MAX][MAX], int n);
void display(int arr2D[MAX][MAX], int n);

int main() {
	int i, j, n;
	int arr2D[MAX][MAX];
	
	printf("Enter N < 100: ");
	scanf("%d", &n);
	
	srand(time(NULL));
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			arr2D[i][j] = rand() % 201 - 100;
		}
	}
	display(arr2D, n);
	printf("Sort array:\n");
	sort(arr2D, n);
	display(arr2D, n);
	
	return 0;
}

void sort(int arr2D[MAX][MAX], int n) {
	int i, j, k;
	int b[n];
	
	for (i = 0; i < n; i++) {
		int t;
		
		for (j = t = 0; j < n; j++) {
			t += arr2D[j][i];
		}
		b[i] = t;
	}
	
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (b[i] > b[j]) {
				swap(b[i], b[j]);
				
				for (k = 0; k < n; k++) {
					swap(arr2D[k][i], arr2D[k][j]);
				}	
			}
		}
	}
}

void display(int arr2D[MAX][MAX], int n) {
	int i, j;
	
	for (i = 0; i < n; i++, putchar('\n')) {
		for (j = 0; j < n; j++) {
			printf("%5d", arr2D[i][j]);
		}
	}
}
