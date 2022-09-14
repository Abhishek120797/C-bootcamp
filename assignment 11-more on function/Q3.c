#include<stdio.h>
int PRIME();
int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    if(PRIME(num))
        printf("%d is prime number",num);
        else
        printf("%d is not prime number",num);
    return 0;
}
//function
int PRIME(int x)
{
    int i,flag=0;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        return 0;
    else
        return 1;
}
