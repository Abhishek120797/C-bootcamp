#include<stdio.h>
int main()
{
    int num,i,sum=0,swap,c;
    printf("Enter a number");
    scanf("%d",&num);
    swap=num;
    for(i=1;swap!=0;i++)
    {
    c=swap%10;
    swap=swap/10;
    sum=sum+c*c*c;
    }
    if(num==sum)
        printf("%d is armstrong number",num);
    else
        printf("%d is not armstrong number",num);
    return 0;
}
