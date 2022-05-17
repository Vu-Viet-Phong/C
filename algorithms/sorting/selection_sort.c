/**
 * Selection sort is an in-place comparison sorting algorithm. It has an 
 * O(n^2) time complexity, which makes it inefficient on large lists, and 
 * generally performs worse than the similar insertion sort. Selection 
 * sort is noted for its simplicity and has performance advantages over 
 * more complicated algorithms in certain situations, particularly where 
 * auxiliary memory is limited
 * @link https://en.wikipedia.org/wiki/Selection_sort
 */
#include <stdio.h>

/**
 * Swapped two numbers using pointer
 * @param first first pointer of first number
 * @param second second pointer of second number
 */
void swap(int *first, int *second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

/**
 * Selection sort algorithm implements
 * @param arr array to be sorted
 * @param size size of array
 */
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_idx = i;

        for (int j = i+1; j < size; j++) {
            if (arr[min_idx] > arr[j]) {
                min_idx = j;
            }
        }

        if (min_idx != i) {
            swap(&arr[min_idx], &arr[i]);
        }
    }
}

/**
 * Print array
 * @param arr array to be sorted
 * @param size size of array
 */
void printArray(int arr[], int size) {
    printf("Sorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/** 
 * Driver Code 
 */
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}