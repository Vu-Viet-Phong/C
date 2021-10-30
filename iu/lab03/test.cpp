#include <stdio.h>

#define swap(a, b) { int t = a; a = b; b = t; }

int ex01(int n);
int ex02(int n);
int ex03(int n);
int ex04(int n);
int ex05(int n);
int input(int a, int arr[]);

int main() {
    int n;

    printf("n: ");
    scanf("%d", &n);
    
    //ex01(n);
    //ex02(n);
    ex03(n);
    //ex04(n);
    //ex05(n);
}

int input(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

int ex01(int n) {
    int arr[100];
    
    input(n, arr);

    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            printf("--> not symmetric");
            return 0;
        }
    }
    printf("--> symmetric");
}


int ex02(int n) {
    int arr[100];

    input(n, arr);

    for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] % 2 && arr[j] % 2) {
                if (arr[i] > arr[j]) swap(arr[i], arr[j]);
            }

            if (!(arr[i] % 2) && !(arr[j] % 2)) {
                if (arr[i] < arr[j]) swap(arr[i], arr[j]);
            }
   		}
	}

    for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

int ex03(int n) {
    int arr[100], max = 1, len = 1, maxIndex = 0;

    input(n, arr);
     
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) len++;
        else {
            if (max < len) {
                max = len; 
                maxIndex = i - max;
            }
            len = 1;   
        }   
    }

    if (max < len) {
        max = len;
        maxIndex = n - max;
    }
 
    for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}
 

int ex04(int n) {
    int arr[100], a = 1, d = 1, i;;

    input(n, arr);

    i = 0;

    while ((a == 1 || d == 1) && i < n - 1) {
        if (arr[i] < arr[i + 1]) d = 0;
        else if (arr[i] > arr[i + 1]) a = 0;
        i++;
    }

    if (a == 1) printf("The array is sorted in ascending order.\n");
    else if (d == 1) printf("The array is sorted in descending order.\n");
    else printf("The array is not sorted.\n");
}



int ex05(int n) {
    int arr[100], j;

    input(n, arr);

    j = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j) swap(arr[i], arr[j]);
            j++;
        }
    }
}

