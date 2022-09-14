#include<stdio.h>
int main()
{
    int num1,num2,i,count=0,c;
    printf("enter two numbers");
    scanf("%d %d",&num1,&num2);
    c=num1<num2?num2:num1;
    for(i=2;i<=c;i++)
    {
        if(num1%i==0&&num2%i==0)
        count++;
    }
    if(count==0)
        printf("%d and %d is co prime number",num1,num2);
    else
        printf("%d and %d is not co prime number",num1,num2);
    return 0;
}
