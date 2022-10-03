#include<stdio.h>
#include<string.h>
struct employee input();
void sort_by_salary();
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

    sort_by_salary(emp,10);

    for(i=0;i<10;i++)
        display(emp[i]);
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


void sort_by_salary(struct employee staff[],int size)
{
    int i,j;
    struct employee temp;
    for(i=1;i<=size-1;i++)
    {
        for(j=0;j<=size-1-i;j++)
        {
            if(staff[j].salary>staff[j+1].salary)
            {
            temp=staff[j];
            staff[j]=staff[j+1];
            staff[j+1]=temp;
            }
        }
    }
}

void display(struct employee staff)
{
    printf("%d %s %d\n",staff.id,staff.name,staff.salary);
}
