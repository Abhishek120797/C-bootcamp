#include<stdio.h>
void printnum(int);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printnum(num);
    return 0;
}

//recursive function
void printnum(int n)
{
    if(n>0)
    {
    printf("%d ",n);
    printnum(n-1);
    }
}
