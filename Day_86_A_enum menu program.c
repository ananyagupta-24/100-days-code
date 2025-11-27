//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>

enum Choice {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int a, b, ch;

    printf("1. ADD\n2. SUBTRACT\n3. MULTIPLY\nEnter your choice: ");
    scanf("%d", &ch);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch ((enum Choice)ch) {
        case ADD:
            printf("Result = %d\n", a + b);
            break;
        case SUBTRACT:
            printf("Result = %d\n", a - b);
            break;
        case MULTIPLY:
            printf("Result = %d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
