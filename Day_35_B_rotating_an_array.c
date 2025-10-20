//Rotate an array to the right by k positions.
#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateRight(int arr[], int size, int k) {
    k = k % size;  

    reverse(arr, 0, size - 1);

    reverse(arr, 0, k - 1);

    reverse(arr, k, size - 1);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printf("Original array: ");
    printArray(arr, size);

    rotateRight(arr, size, k);

    printf("Array after rotating right by %d positions: ", k);
    printArray(arr, size);

    return 0;
}
