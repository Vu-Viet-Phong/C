#include <stdio.h>

#define swap(a, b) { int t = a; a = b; b = t; }

void inputArray2D(int row, int col, int arr[][100]) {
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			printf("arr[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}

int outputArray2D(int m, int n, int arr[][100]);
int findMax(int m, int n, int arr[][100]);
int findMin(int m, int n, int arr[][100]);

void ex01(int n) {
	int space, coef = 1;
	
	for (int i = 0; i < n; i++) {
		for (space = 1; space <= n - i; space++)
			printf(" ");
			
		for (int j = 0; j <= i; j++) {
			if (j == 0 || i == 0) coef = 1;
			else coef = coef * (i - j + 1) / j;
			printf("%4d", coef);
		}
		printf("\n");
	}
}

int sortColRow(int row, int col, int arr[][100]) {
	int i;
	
	for (i = 0; i < ; i++) {
		if (i == 0 || !(i % 2)) { 
			sortArrayIncreasing
		} else {
			sortDecreasing(m, i, arr); 
		}
	}
	outputArray2D(i, j, arr);
}

int sortArrayIncreasing(int m, int n, int arr[][100]) {
	int i, j, t;
	
	for( i = 0; i < m - 1; i++ ) {
		for( j = i + 1; j < m; j++ ) {
			if( arr[i][n] > arr[j][n] )
			{t = arr[i][n]; arr[i][n] = arr[j][n]; arr[j][n] = t;}
		}
	}
}

int sortArrayDecreasing(int m, int n, int arr[][100]) {
	int i, j, t;
	
	for( i = 0; i < m - 1; i++ ) {
		for( j = i + 1; j < m; j++ ) {
			if( arr[i][n] < arr[j][n] )
			{t = arr[i][n]; arr[i][n] = arr[j][n]; arr[j][n] = t;}
		}
	}
}

int ex03(int n, int arr[][100]) {
	int i, j, t, a, b;
	for( i = 0; i < n - 1 ; i++ ) {
		for( j = i + 1; j < n; j++ ) {
			if( arr[i][i] > arr[j][j])
			{t = arr[i][i]; arr[i][i] = arr[j][j]; arr[j][j] = t;}
		}
	}
	
	for( i = n - 1, j = 0; i > 0, j < n - 1; i--, j++ ) {
		for( a = i - 1, b = j + 1; a >= 0, b < n; a--, b++ ) {
		if( arr[i][j] < arr[a][b])
		{t = arr[i][j]; arr[i][j] = arr[a][b]; arr[a][b] = t;}
		}
	}
	
	outputArray2D(n, n, arr);
}

int ex05(int m, int n, int arr[][100]) {
	int j;
	
	for( j = 0; j < m; j++ ) {
		printf( "Max column %d: %d\n", j + 1, findMax(j, n, arr) );
		printf( "Min column %d: %d\n", j + 1, findMin(j, n, arr) );
	}
}


int main() {
	int b;
	do{
		printf("1.ex01 \n2.ex02 \n3.ex03 \n4.ex04 \n5.ex05 \n");
		scanf("%d", &b);
	
		/* Choose ex01, ex02, ex03, ex04 */
		switch(b){
			case 1: {	
				int n;
				printf("N: " );
   				scanf("%d", &n);
				ex01(n);
				break;
			}
				case 2: {
				int row, col;
				int arr[100][100];
				
				printf("Input an array of m x n: ");
				scanf("%d %d", &i, &j);
				inputArray2D(i, j, arr);
				ex02(i, j, arr);
				printf( "\n" );
				break;
			}
			case 3: {
				int i;
				int arr[100][100];
				printf( "Nhap mang n x n (n chan): " );
				scanf ( "%d", &i );
				if( i % 2 ) {
					printf( "Khong hop le\n" );
					break;
				}
				else {
					inputArray2D(i, i, arr);
					ex03(i, arr);
				}
				printf( "\n" );	
				break;
			}
			case 4: {
				int i, j, arr[100][100], row;
				inputArray2D(i, j, arr);
				printf( "%d phan tu can chen : ", i );
				scanf ( "%d", &row );
				
				
				break;
			}
			case 5: {
				int i, j;
				int arr[100][100];
				printf( "Nhap mang m x n: " );
				scanf ( "%d %d", &i, &j );
				inputArray2D(i, j, arr);
				ex05(i, j, arr);
				
				break;
			}
		}
	}while( !0 );
	return 0;
}



int inputArray2D(int n, int m, int arr[][100]) {
	int i, j;
	
	for( i = 0; i < n; i++ ) {
		for( j = 0; j < n; j++ ) {
			printf( "arr[%d][%d]: ", i, j);
			scanf( "%d", &arr[i][j] );
		}
	}
}

int outputArray2D(int m, int n, int arr[][100]) {
	int i, j;
	
	for( i = 0; i < m; i++ ) {
		for( j = 0; j < n; j++ ) 
			printf( "%3d", arr[i][j]);
		printf( "\n" );
	}
}

int findMax(int m, int n, int arr[][100]) {
	int i;
	int max = arr[m][0];
	for( i = 1; i < n; i++ ) {
		if( arr[m][i] > max ) max = arr[m][i]; 
	}
	return max;
}

int findMin(int m, int n, int arr[][100]) {
	int i;
	int min = arr[m][0];
	for( i = 1; i < n; i++ ) {
		if( arr[m][i] < min ) min = arr[m][i]; 
	}
	return min;
}


