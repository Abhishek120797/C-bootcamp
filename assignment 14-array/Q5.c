#include<stdio.h>
int main()
{
    int num[10],i,smallest;
    printf("Enter 10 numbers : ");
    for(i=0;i<=9;i++)
        scanf("%d",&num[i]);
    smallest=num[0];
    for(i=0;i<=9;i++)
        if(num[i]<smallest)
            smallest=num[i];
    printf("%d is smallest number",smallest);
    return 0;
}
