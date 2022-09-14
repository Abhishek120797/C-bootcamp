#include<stdio.h>
int main()
{
    int i=1,num1,num2;
    printf("Enter a number\nfirst number=");
    scanf("%d",&num1);
    printf("second number=");
    scanf("%d",&num2);
    while(i!=0)
    {
        if(i%num1==0&&i%num2==0)
        {
            printf("LCM of  %d and  %d is  %d",num1,num2,i);
            i=0;
        }
        else
        {
            i++;
        }

    }
    return 0;
}
