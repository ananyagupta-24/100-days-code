// Q1  Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;  
    digits = (int)log10(num);  
    firstDigit = num / pow(10, digits); 

    int middlePart = num % (int)pow(10, digits);
    middlePart = middlePart / 10;

    swappedNum = lastDigit * pow(10, digits) + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
