struct marks
{
    int rollno;
    char name[50];
    float chem,math,phy;
};
#include<stdio.h>
struct marks input();
void display_percent();
int main()
{
    struct marks stu[5];
    int i;
    printf("Enter 5 student's roll_no,name,subject marks\n");
    for(i=0;i<5;i++)
        stu[i]=input();
    for(i=0;i<5;i++)
        display_percent(stu[i]);
    return 0;
}
struct marks input()
{
    struct marks s;
    printf("Enter roll no : ");
    scanf("%d",&s.rollno);
    fflush(stdin);
    printf("Enter name : ");
    gets(s.name);
    printf("Enter chemestry marks : ");
    scanf("%f",&s.chem);
    printf("Enter maths marks : ");
    scanf("%f",&s.math);
    printf("Enter physics : ");
    scanf("%f",&s.phy);

 return s;
}
void display_percent(struct marks s)
{
    float percent;
    percent=(s.chem+s.math+s.phy)*100/300;
    printf("Roll no %d  %s your percent is %f\n",s.rollno,s.name,percent);
}
