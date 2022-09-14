#include<stdio.h>
void naturaloddnum();
int main()
{
    int num;
    printf("enter a number ");
    scanf("%d",&num);
    naturaloddnum(num);
    return 0;
}
//function
void naturaloddnum(int x)
{
    int i=1;
    for(i;i<=x;i++)
    {
        printf("%d ",i*2-1);
    }
}
