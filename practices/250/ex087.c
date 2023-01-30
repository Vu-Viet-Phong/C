#include <stdio.h>

#define MAX 20

int detMatrix(int arr2D[MAX][MAX], int n);
int computeTrace(int arr2D[MAX][MAX], int n);
void inputArray2D(int arr2D[MAX][MAX], int number);
void display(int arr2D[MAX][MAX], int n);

int main() {
    int i, j, n, trace;
    int arr2D[MAX][MAX];
    
    printf("Enter N < 20: ");
    scanf("%d", &n);
    inputArray2D(arr2D, n);
    
    printf("Matrix A(%dx%d):\n", n, n);
    display(arr2D, n);
    trace = computeTrace(arr2D, n);
    printf("Trace = %3d\n", trace);

    if (detMatrix(arr2D, n)) {
        for (trace = 1, i = 0; i < n; i++) {
            trace *= arr2D[i][i];
        }
        printf("det(A) = %d\n", trace);    
    } else printf("Matrix A not a echelon matrix\n");

    return 0;
}

int detMatrix(int arr2D[][MAX], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (arr2D[i][j]) return 0;
        }
    }
    return 1;
}

int computeTrace(int arr2D[][MAX], int n) {
    int i, trace;
    for (i = trace = 0; i < n; i++) {
        trace += arr2D[i][i];
    }
    return trace;
}

void inputArray2D(int arr2D[][MAX], int n) {		
    int i, j;
	for (i = 0; i < n; i++) { 
        for (j = 0; j < n; j++) {
            printf("array[%d][%d] = ", i, j);
		    scanf("%d", &arr2D[i][j]);
        }
	}
}

void display(int arr2D[][MAX], int n) {
	int i, j;
	for (i = 0; i < n; i++, putchar('\n')) {
		for (j = 0; j < n; j++) {
			printf("%5d", arr2D[i][j]);
		}
	}
}