#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 20

int isIdentityMatrix(int arr2D[][MAX], int n);
void display(int arr2D[][MAX], int n);

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
    display(arr2D, n);

    if (isIdentityMatrix(arr2D, n)) printf("Identity Matrix\n");
    else {
        printf("Not Identity Matrix\n");
        for (i = 0; i < n; i++, putchar('\n')) {
            for (j = 0; j < n; j++) {
                printf("%5d", i == j);
            }
        }
    }

	return 0;
}

int isIdentityMatrix(int arr2D[][MAX], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i != j && arr2D[i][j] != 0) return 0;
            if (i == j && arr2D[i][j] != 1) return 0;
        }
    }
    return 1;
}

void display(int arr2D[][MAX], int n) {
	int i, j;
	for (i = 0; i < n; i++, putchar('\n')) {
		for (j = 0; j < n; j++) {
			printf("%5d", arr2D[i][j]);
		}
	}
}