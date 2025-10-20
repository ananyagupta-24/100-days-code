//Find the second largest element in an array.
#include <stdio.h>
#include <limits.h>  

int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        printf("Array must have at least two elements.\n");
        return INT_MIN;
    }

    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("There is no distinct second largest element.\n");
        return INT_MIN;
    }

    return second;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, size);

    if (secondLargest != INT_MIN) {
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}
