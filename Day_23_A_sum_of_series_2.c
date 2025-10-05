//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

  if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

  for (int i = 1; i <= n; i++) {
        float numerator = 2 * i;
        float denominator = 4 * (i - 1) + 3;
        sum += numerator / denominator;
    }

    printf("Sum of the series up to %d terms is: %.4f\n", n, sum);

    return 0;
}
