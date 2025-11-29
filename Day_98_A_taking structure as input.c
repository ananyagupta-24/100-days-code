//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s1, s2;

    printf("Enter details of first student\n");
    printf("Roll: ");
    scanf("%d", &s1.roll);
    printf("Name: ");
    scanf(" %[^\n]", s1.name);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    printf("\nEnter details of second student\n");
    printf("Roll: ");
    scanf("%d", &s2.roll);
    printf("Name: ");
    scanf(" %[^\n]", s2.name);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    if(s1.roll == s2.roll && strcmp(s1.name, s2.name) == 0 && s1.marks == s2.marks)
        printf("\nBoth structures are identical");
    else
        printf("\nStructures are not identical");

    return 0;
}

