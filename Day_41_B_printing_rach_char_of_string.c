//Print each character of a string on a new line.Print each character of a string on a new line.
#include <stdio.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    printf("     Characters in the Given String   \n");

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n')  
            printf("%c\n", str[i]);
    }

    printf("=====================================\n");
    printf("Program completed successfully.\n");

    return 0;
}
