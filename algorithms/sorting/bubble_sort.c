/**
 * Bubble sort, sometimes referred to as sinking sort, is a simple 
 * sorting algorithm that repeatedly steps through the list, compares 
 * adjacent elements and swaps them if they are in the wrong order. 
 * The pass through the list is repeated until the list is sorted. 
 * The algorithm, which is a comparison sort, is named for the way 
 * smaller or larger elements "bubble" to the top of the list.
 * @link https://en.wikipedia.org/wiki/Bubble_sort
 */
#include <stdio.h>
#include <stdbool.h>

/* Swaps two elements */
void swap(int *first, int *second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

/**
 * Bubble sort algorithm implements
 * @param arr array to be sorted
 * @param size size of array
 */
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;
        
        for (int j = 0; j < size - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
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
    
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}