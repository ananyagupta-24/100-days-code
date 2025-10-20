//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long num;
    int digitCount[10] = {0};  

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        int digit = num % 10;
        digitCount[digit]++;
        num /= 10;
    }

    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (digitCount[i] > digitCount[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("The digit that occurs the most is: %d\n", maxDigit);
    printf("It occurs %d times.\n", digitCount[maxDigit]);

    return 0;
}
