#include <stdio.h>

int main()
{
    struct Employee
    {
        int id;
        float salary;
        char name[50];
    };

    struct Employee emp1 = {101, 10000, "Abhishek"};
    printf("%d %.2f %s", emp1.id, emp1.salary, emp1.name);

    return 0;
}