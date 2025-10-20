//Search in a sorted array using binary search.

#include <stdio.h>
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid; 
        else if (arr[mid] < target)
            left = mid + 1; 
        else
            right = mid - 1; 
    }

    return -1;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25, 30, 35};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 20;

    int result = binarySearch(arr, size, target);

    if (result != -1)
        printf("Element %d found at index %d.\n", target, result);
    else
        printf("Element %d not found in the array.\n", target);

    return 0;
}
