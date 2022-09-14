#include<stdio.h>
int main()
{
    int x;
    printf("Enter a year in yyyy format ");
    scanf("%d",&x);
    switch(x%4)
    {
    case 0:
        printf("%d is leap year",x);
        break;
    case 1:
        printf("%d is not leap year",x);
    }
    return 0;
}
