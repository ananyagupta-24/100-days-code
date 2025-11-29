//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date join;
};

int main() {
    struct Employee e;

    printf("Enter employee details\n");
    printf("ID: ");
    scanf("%d", &e.id);
    printf("Name: ");
    scanf(" %[^\n]", e.name);
    printf("Salary: ");
    scanf("%f", &e.salary);
    printf("Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &e.join.day, &e.join.month, &e.join.year);

    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
    printf("Joining Date: %02d/%02d/%04d\n", e.join.day, e.join.month, e.join.year);

    return 0;
}
