//Reverse a string.
#include <stdio.h>

void reverseString(char str[]) {
    int i = 0, j = 0;
    char temp;

    while (str[j] != '\0') {
        j++;
    }
    j--;  
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    int len = 0;
    while (str[len] != '\0') {
        if (str[len] == '\n') {
            str[len] = '\0';
            break;
        }
        len++;
    }

    reverseString(str);  

    printf("         Reversed String             \n");
    printf("%s\n", str);

    return 0;
}
