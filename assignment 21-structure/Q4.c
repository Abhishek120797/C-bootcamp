#include <stdio.h>
#include <string.h>

#define NAME_SIZE 50
#define TOTAL_EMP 10

struct Employee
{
    int id;
    float salary;
    char name[NAME_SIZE];
};

struct Employee getEmployee();
void display_Employee(struct Employee);
void high_salary_Employee(struct Employee[]);

int main()
{
    struct Employee emp[TOTAL_EMP] = {
        {101, 4000, "Abhishek"},
        {102, 5000, "Aniket"},
        {103, 7000, "Avinash"},
        {104, 9000, "Anchal"},
        {105, 1000, "Sunita"},
        {106, 2000, "Ramkumar"},
        {107, 4000, "shalu"},
        {108, 8000, "vicky"},
        {109, 5000, "Aashu"},
        {110, 3000, "babu"},
    };

    high_salary_Employee(emp);
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

void high_salary_Employee(struct Employee emp[])
{
    struct Employee temp = emp[0];

    for (int i = 0; i < TOTAL_EMP; i++)
    {
        if (emp[i].salary > temp.salary)
            temp = emp[i];
    }
    display_Employee(temp);
}