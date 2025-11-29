//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void printStudent(struct Student s) {
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1;

    printf("Enter student details\n");
    printf("Roll: ");
    scanf("%d", &s1.roll);
    printf("Name: ");
    scanf(" %[^\n]", s1.name);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    printf("\nStudent Details:\n");
    printStudent(s1);

    return 0;
}
