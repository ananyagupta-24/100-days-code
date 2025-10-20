//Delete an element from an array.
#include <stdio.h>

void deleteAtPosition(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position.\n");
        return;
    }

    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int position = 2; 

    printf("Original array: ");
    printArray(arr, size);

    deleteAtPosition(arr, &size, position);

    printf("Array after deleting element at position %d: ", position);
    printArray(arr, size);

    return 0;
}
