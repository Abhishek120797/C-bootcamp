#include<stdio.h>
int main()
{
    int num,i,result=0;
    printf("Enter a number ");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        result=1;
        break;
    }
    if(result==1)
        printf("%d is not a prime number",num);
        else
        printf("%d is prime number",num);
    return 0;
}
