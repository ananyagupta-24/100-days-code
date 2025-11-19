//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int max = arr[0], sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum > max) max = sum;
        if(sum < 0) sum = 0;
    }
    printf("%d", max);
    return 0;
}
