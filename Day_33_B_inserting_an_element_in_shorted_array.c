//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

void insertSorted(int arr[], int *size, int element, int capacity) {
    if (*size >= capacity) {
        printf("Cannot insert: array is full.\n");
        return;
    }

    int i = *size - 1;

    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = element;
    (*size)++;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};  
    int size = 5;
    int element = 35;

    printf("Original array: ");
    printArray(arr, size);

    insertSorted(arr, &size, element, 100);

    printf("Array after inserting %d: ", element);
    printArray(arr, size);

    return 0;
}
