//Insert an element in an array at a given position.
#include <stdio.h>

void insertAtPosition(int arr[], int *size, int element, int position, int capacity) {
    if (*size >= capacity || position < 0 || position > *size) {
        printf("Invalid position or array is full.\n");
        return;
    }

    for (int i = *size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position] = element;
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
    int element = 25;
    int position = 2; 

    printf("Original array: ");
    printArray(arr, size);

    insertAtPosition(arr, &size, element, position, 100);

    printf("Array after inserting %d at position %d: ", element, position);
    printArray(arr, size);

    return 0;
}
