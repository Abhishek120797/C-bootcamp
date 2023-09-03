#include <stdio.h>
#include <string.h>

#define MAX_SIZE 5

struct Marks
{
    int roll_no;
    char name[50];
    float chem_marks;
    float maths_marks;
    float phy_marks;
};

void getStudentMarks(struct Marks *);
void displyStudentPercentage(struct Marks *);

int main()
{
    struct Marks stud[MAX_SIZE];

    printf("\n-------Enter student Marks-------\n");

    for (int i = 0; i < MAX_SIZE; i++)
    {
        getStudentMarks(&stud[i]);
    }
    printf("\n\n");
    for (int i = 0; i < MAX_SIZE; i++)
    {
        displyStudentPercentage(&stud[i]);
    }
}

void getStudentMarks(struct Marks *s)
{
    printf("Enter roll no: ");
    scanf("%d", &(s->roll_no));

    printf("Enter name: ");
    fflush(stdin);
    fgets((s->name), 50, stdin);
    s->name[strcspn(s->name, "\n")] = '\0';

    printf("Enter marks in chemistry: ");
    scanf("%f", &(s->chem_marks));

    printf("Enter marks in Mathematics: ");
    scanf("%f", &(s->maths_marks));

    printf("Enter marks in physics: ");
    scanf("%f", &(s->phy_marks));
}

void displyStudentPercentage(struct Marks *s)
{
    float total_marks = s->chem_marks + s->maths_marks + s->phy_marks;
    float percent = (total_marks / 300) * 100;
    printf("%d %s %.2f %%\n", s->roll_no, s->name, percent);
}
