//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[20];
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%19s", p.name);

    printf("Enter gender (0=MALE, 1=FEMALE, 2=OTHER): ");
    scanf("%d", &p.gender);

    if (p.gender == MALE)
        printf("Name: %s, Gender: MALE\n", p.name);
    else if (p.gender == FEMALE)
        printf("Name: %s, Gender: FEMALE\n");
    else if (p.gender == OTHER)
        printf("Name: %s, Gender: OTHER\n");

    return 0;
}
