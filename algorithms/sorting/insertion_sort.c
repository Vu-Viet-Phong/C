/**
 * Insertion sort is a simple sorting algorithm that builds the 
 * final sorted array (or list) one item at a time. It is much 
 * less efficient on large lists than more advanced algorithms 
 * such as quicksort, heapsort, or merge sort. 
 * @link https://en.wikipedia.org/wiki/Insertion_sort
 */
#include <stdio.h>
#include <stdbool.h>

/**
 * Insertion sort algorithm implements
 * @param arr array to be sorted
 * @param size size of array
 */
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size - 1; i++) {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
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
    
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}