#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;


    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num; 
   
    int isNegative = 0;
    if (num < 0) {
        isNegative = 1;
        num = -num; 
    }

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (isNegative) {
        reversed = -reversed;
    }

    
    printf("Reversed number of %d is %d\n", original, reversed);

    return 0;
}
