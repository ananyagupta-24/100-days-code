//Write a program to check if a number is prime.

#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, i;
    bool isPrime = true;

    printf("Enter an integer greater than 1: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
