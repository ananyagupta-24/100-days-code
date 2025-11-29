//Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student *s;

    s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL)
        return 1;

    printf("Enter student details\n");
    printf("Roll: ");
    scanf("%d", &s->roll);
    printf("Name: ");
    scanf(" %[^\n]", s->name);
    printf("Marks: ");
    scanf("%f", &s->marks);

    printf("\nStudent Details:\n");
    printf("Roll: %d\n", s->roll);
    printf("Name: %s\n", s->name);
    printf("Marks: %.2f\n", s->marks);

    free(s);

    return 0;
}
