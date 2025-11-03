#include <stdio.h>

int main() {
    char str[200];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n')  
            count++;
    }

    printf("     Character Counting Program       \n");
    printf("Entered String: %s", str);
    printf("Total Characters: %d\n", count);

    return 0;
}
