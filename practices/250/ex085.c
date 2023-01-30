#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define swap(a, b) { int temp = a; a = b; b = temp; }
const int N = 4;

void sort(int arr2D[N][N]);
void display(int arr2D[N][N]);

int main() {
	int i, j; 
	int arr2D[N][N];
	
	srand(time(NULL));
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			arr2D[i][j] = rand() % 201 - 100;
		}
	}
	printf("Origin array:\n");
	display(arr2D);
	
	sort(arr2D);
	printf("Sort array:\n");
	display(arr2D);
	
	return 0;
}

void sort(int arr2D[N][N]) {
	int i, j;
	int* arr1D = &arr2D[0][0];
	
	for (i = 0; i < N * N - 1; i++) {
		for (j = i + 1; j < N * N; j++) {
			if (arr1D[i] > arr1D[j]) {
				swap(arr1D[i], arr1D[j]);	
			}
		}
	}
}

void display(int arr2D[N][N]) {
	int i, j;
	for (i = 0; i < N; i++, putchar('\n')) {
		for (j = 0; j < N; j++) {
			printf("%5d", arr2D[i][j]);
		}
	}
}
