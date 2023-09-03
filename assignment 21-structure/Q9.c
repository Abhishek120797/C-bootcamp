#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

struct Student
{
    int roll_no;
    char name[50];
    int age;
};

void getStudent(struct Student *);
void displyStudent(struct Student *);

int main()
{
    int n;
    printf("Enter the number of student: ");
    scanf("%d", &n);

    struct Student stud[MAX_SIZE];

    printf("\n-------Enter student details-------\n");

    for (int i = 0; i < n; i++)
    {
        getStudent(&stud[i]);
    }

    for (int i = 0; i < n; i++)
    {
        displyStudent(&stud[i]);
    }
}

void getStudent(struct Student *s)
{
    printf("Enter roll no: ");
    scanf("%d", &(s->roll_no));

    printf("Enter name: ");
    fflush(stdin);
    fgets((s->name), 50, stdin);
    s->name[strcspn(s->name, "\n")] = '\0';

    printf("Enter age: ");
    scanf("%d", &(s->age));
}

void displyStudent(struct Student *s)
{
    printf("%d %s %d\n", s->roll_no, s->name, s->age);
}
