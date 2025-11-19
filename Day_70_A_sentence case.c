//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);
    int i = 0;

    while(s[i]==' ') i++;

    if(s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 32;

    i++;

    while(s[i] != '\0'){
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] + 32;
        i++;
    }

    printf("%s", s);
    return 0;
}
