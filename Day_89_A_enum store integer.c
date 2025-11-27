//Show that enums store integers by printing assigned values.

#include <stdio.h>

enum Test {
    A = 5,
    B,
    C,
    D
};

int main() {
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);

    return 0;
}
