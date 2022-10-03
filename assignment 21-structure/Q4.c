#include<stdio.h>
#include<string.h>
struct employee input();
void max_salary();
struct employee
    {
        int id;
        char name[50];
        int salary;
    };
int main()
{
    int i;
    struct employee emp[10];
    printf("Enter 10 employee's id ,name and salary\n");
    for(i=0;i<10;i++)
        emp[i]=input();
        max_salary(emp,10);
    return 0;
}
struct employee input()
{
    struct employee staff;
    printf("Enter employee id : ");
    scanf("%d",&staff.id);
    fflush(stdin);
    printf("Enter employee name : ");
    gets(staff.name);
    printf("Enter employee salary : ");
    scanf("%d",&staff.salary);
 return staff;
}
void max_salary(struct employee staff[],int size)
{
    int i,high;
    high=staff[0].salary;
    for(i=0;i<size;i++)
    {
        if(staff[i].salary>high)
            high=staff[i].salary;
    }
    for(i=0;i<size;i++)
    {
        if(staff[i].salary==high)
            printf("highest salary employee are \n%d %s %d",staff[i].id,staff[i].name,staff[i].salary);
    }
}
