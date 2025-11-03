//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
#include <ctype.h>  
int main() {
    char str1[200], str2[200];
    int freq[26] = {0};  
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (i = 0; str1[i] != '\0'; i++) {
        char ch = tolower(str1[i]);
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }

    for (i = 0; str2[i] != '\0'; i++) {
        char ch = tolower(str2[i]);
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']--;
        }
    }

    int isAnagram = 1;
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}
