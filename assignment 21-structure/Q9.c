struct student
{
    int rollno;
    char name[50];
    float chem,math,phy;
};
#include<stdio.h>
struct student input();
void display();
int main()
{
    int n,i;
    printf("Enter a count of student :");
    scanf("%d",&n);
    struct student s[n];
    printf("Enter %d student's roll_no,name,subject marks\n",n);
    for(i=0;i<n;i++)
        s[i]=input();
    for(i=0;i<n;i++)
        display(s[i]);
    return 0;
}
struct student input()
{
    struct student s;
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
void display(struct student s)
{
    printf("%d %s %f %f %f\n",s.rollno,s.name,s.chem,s.math,s.phy);
}
