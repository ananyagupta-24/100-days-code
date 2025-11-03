//Remove all vowels from a string.

#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[200], result[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    while (str[i] != '\0') {
        char ch = tolower(str[i]); 
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            result[j++] = str[i];  
        }
        i++;
    }

    result[j] = '\0';  

    printf("String after removing vowels: %s\n", result);

    return 0;
}
