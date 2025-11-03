//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[200];
    int i, lastSpaceIndex = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; 

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpaceIndex = i;
    }

    i = 0;
    while (i <= lastSpaceIndex) {
        if (isalpha(name[i])) {
            printf("%c.", toupper(name[i]));
            while (name[i] != ' ' && name[i] != '\0') i++;
        } else {
            i++;
        }
    }

    printf("%s\n", &name[lastSpaceIndex + 1]);

    return 0;
}
