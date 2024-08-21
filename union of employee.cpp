#include <stdio.h>
#include <string.h>

union emp {
    int id;
    float salary;
    char name[10];
};

int main() {
    union emp emp;
    printf("Enter name of employee: ");
    fgets(emp.name, 10, stdin);
    emp.name[strcspn(emp.name, "\n")] = '\0';
    printf("Name of employee is %s\n", emp.name);

    printf("Enter id of employee: ");
    scanf("%d", &emp.id);
    printf("Id of employee is %d\n", emp.id);

    printf("Enter salary of employee: ");
    scanf("%f", &emp.salary);
    printf("Salary of employee is %f\n", emp.salary);

    return 0;
}

