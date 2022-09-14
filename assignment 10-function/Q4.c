#include<stdio.h>
void naturalnum();
int main()
{
    int num;
    printf("enter a number ");
    scanf("%d",&num);
    naturalnum(num);
    return 0;
}
//function
void naturalnum(int x)
{
    int i=1;
    for(i;i<=x;i++)
    {
        printf("%d ",i);
    }
}
