struct employee
{
    int id;
    char name[50];
    int salary;
};
#include<stdio.h>
int main()
{
    int i;
    struct employee emp_1={1,"Abhishek jaiswal",12000};
    printf("emp id = %d\nemp name = %s\nemp salary = %d",emp_1.id,emp_1.name,emp_1.salary);
    return 0;
}


