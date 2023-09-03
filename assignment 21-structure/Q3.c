#include <stdio.h>
#include <string.h>

#define NAME_SIZE 50

struct Employee getEmployee();
void display_Employee(struct Employee);

struct Employee
{
    int id;
    float salary;
    char name[NAME_SIZE];
};

int main()
{
    struct Employee emp1;
    emp1 = getEmployee();
    display_Employee(emp1);
    return 0;
}

struct Employee getEmployee()
{
    struct Employee emp;
    printf("Enter employee Id: ");
    scanf("%d", &emp.id);

    printf("Enter employee name: ");
    fflush(stdin);
    fgets(emp.name, NAME_SIZE, stdin);
    emp.name[strlen(emp.name) - 1] = '\0';

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    return emp;
}

void display_Employee(struct Employee emp)
{
    printf("Employee Id ==> %d\n", emp.id);
    printf("Employee Name ==> %s\n", emp.name);
    printf("Employee Salary ==> %.2f\n", emp.salary);
}