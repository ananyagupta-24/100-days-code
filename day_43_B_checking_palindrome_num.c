//Check if a string is a palindrome.
#include <stdio.h>
#include <ctype.h>  

int isPalindrome(char str[]) {
    int i = 0, j = 0;

    while (str[j] != '\0') {
        j++;
    }
    j--; 

    while (i < j) {
        char left = tolower(str[i]);
        char right = tolower(str[j]);

        if (left != right)
            return 0; 
        i++;
        j--;
    }

    return 1;  
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

    if (isPalindrome(str))
        printf("\n'%s' is a palindrome.\n", str);
    else
        printf("\n'%s' is not a palindrome.\n", str);

    return 0;
}
