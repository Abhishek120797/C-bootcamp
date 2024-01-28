// Write a function to take input employee data from the user. [ Refer structure from
// question 1 ]

#include <stdio.h>
#include <string.h>

#define NAME_SIZE 50

struct Employee getEmployee();

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
    printf("%d %.2f %s", emp1.id, emp1.salary, emp1.name);
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