//Toggle case of each character in a string.
#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    while (str[i] != '\0') {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);  
        }
        else if (islower(str[i])) {
            str[i] = toupper(str[i]);  
        }
        i++;
    }

    printf("Toggled case string: %s\n", str);

    return 0;
}
