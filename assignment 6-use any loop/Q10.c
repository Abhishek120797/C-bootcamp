#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter a number  ");
    scanf("%d",&num);
    while(num!=0)
    {
        i=num;
        i=i%10;
        printf("%d",i);
        num=num/10;
        }
    return 0;
}
