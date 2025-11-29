//Store employee data in a binary file using fwrite() and read using fread().
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
    struct Employee e, r;
    FILE *fp;

    printf("Enter employee details\n");
    printf("ID: ");
    scanf("%d", &e.id);
    printf("Name: ");
    scanf(" %[^\n]", e.name);
    printf("Salary: ");
    scanf("%f", &e.salary);
    printf("Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &e.join.day, &e.join.month, &e.join.year);

    fp = fopen("employee.dat", "wb");
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    fread(&r, sizeof(r), 1, fp);
    fclose(fp);

    printf("\nEmployee Read From File:\n");
    printf("ID: %d\n", r.id);
    printf("Name: %s\n", r.name);
    printf("Salary: %.2f\n", r.salary);
    printf("Joining Date: %02d/%02d/%04d\n", r.join.day, r.join.month, r.join.year);

    return 0;
}
