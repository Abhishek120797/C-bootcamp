#include<stdio.h>
int main()
{
    int i,num,count=0;
    printf("Enter a number  ");
    scanf("%d",&num);
for(i=num;i!=0;i )
{
    i=i/10;
    count++;
}
    printf("number of digit in %d is %d",num,count);
    return 0;
}
