#include <stdio.h>

#define swap(a, b) { int t = a; a = b; b = t; }

// Function to input the array
void inputArray(int arr[], int number) {		
	for (int i = 0; i < number; i++){ 
		printf("array[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

// Function to check array is symmetric or not symmetric
void symmetric(int arr[], int number) {		
	for (int i = 0, j = number - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            printf("--> not symmetric");
            return 0;
        }
    }
    printf("--> symmetric");	
}

// Function to sort the odd numbers in increasing order and even numbers in decreasing order
void sortID(int arr[], int number) {
	for (int i = 0; i < number - 1; i++) {
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

// Function Find the largest sorted sub array (sorted array 
// increasing / decreasing and has the largest number of elements)
int findSubArrayID(int arr[], int number) {
	int arr[100], max = 1, len = 1, maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
			len++;
        } else {
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

// Function to check if a certain array is sorted.
// Return 1 if sorted increasing, -1: decreasing, 0: not sorted
int checkSortedArray(int arr[], int number) {
	int inc = 1, dec = 1, i = 0;

  	for (int i = 0; i < number; i++) {
		if (arr[i] < arr[i + 1]) inc++;
		if (arr[i] > arr[i + 1]) dec++;
	}

	if (inc == number) return 1;
	else if (dec == number) return -1;
	else return 0;
}


int main() {
	int arr[100];
	int number, selection;

	printf("1.ex01 \n2.ex02 \n3.ex03 \n4.ex04 \n5.ex05 \n");
	scanf("%d", &selection);
	
	/* Choose ex01, ex02, ex03, ex04, ex05 */
	switch(selection){
		case 1: {
			printf("N : ");
			scanf("%d", &number);
			inputArray(arr, number);	
			symmetric(arr, number);
			break;
		}
		case 2: {	
			printf("N : ");
			scanf("%d", &number);
			inputArray(arr, number);
			sortID(arr, number);
			break;
		}
		case 3: {
			printf("N : ");
			scanf("%d", &number);
			inputArray(arr, number);
			findSubArrayID(arr, number);
			break;
		}
		case 4: {
			printf("N : ");
			scanf("%d", &number);
			inputArray(arr, number);
			checkSortedArray(arr, number);
			break;
		}
		case 5: {
			outputArray(a, n);
			moveArray(a, n);
			printf(" --> ");
			outputArray(a, n);	
			break;
		}
	}
	
	return 0;
}

// Function to input the array
int inputArray(int arr[], int number) {		
	for (int i = 0; i < number; i++){ 
		printf("array[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

