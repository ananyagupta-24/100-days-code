//Count spaces, digits, and special characters in a string.
#include <stdio.h>
#include <ctype.h>  
int main() {
    char str[200];
    int spaces = 0, digits = 0, special = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    while (str[i] != '\0') {
        if (isspace(str[i])) {
            spaces++;
        }
        else if (isdigit(str[i])) {
            digits++;
        }
        else if (!isalpha(str[i])) {
            special++;
        }
        i++;
    }

    printf("\nSpaces: %d", spaces);
    printf("\nDigits: %d", digits);
    printf("\nSpecial characters: %d\n", special);

    return 0;
}
