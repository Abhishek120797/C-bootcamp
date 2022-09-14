#include<stdio.h>
int main()
{
    int num[10],i,greater=0;
    printf("Enter 10 numbers : ");
    for(i=0;i<=9;i++)
        scanf("%d",&num[i]);
    for(i=0;i<=9;i++)
        if(num[i]>greater)
            greater=num[i];
    printf("%d is greater number",greater);
    return 0;
}
