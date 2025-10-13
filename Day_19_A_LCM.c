//Write a program to find the LCM of two numbers.
#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b, lcm_value;

    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    int gcd_value = gcd(a, b);
    lcm_value = (a / gcd_value) * b;  

    printf("LCM of %d and %d is: %d\n", a, b, lcm_value);

    return 0;
}
