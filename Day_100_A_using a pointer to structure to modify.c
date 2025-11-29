//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s;
    struct Student *p = &s;

    printf("Enter student details\n");
    printf("Roll: ");
    scanf("%d", &p->roll);
    printf("Name: ");
    scanf(" %[^\n]", p->name);
    printf("Marks: ");
    scanf("%f", &p->marks);

    p->marks += 5;

    strcpy(p->name, "Updated Name");

    printf("\nModified Student Details:\n");
    printf("Roll: %d\n", p->roll);
    printf("Name: %s\n", p->name);
    printf("Marks: %.2f\n", p->marks);

    return 0;
}
