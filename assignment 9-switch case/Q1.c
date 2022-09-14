#include<stdio.h>
int main()
{
    int x;
    printf("Enter a month number ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("number of days in %d is 31",x);
        break;
         case 2:
        printf("number of days in %d is 28");
        break;
         case 3:
        printf("number of days in %d is 31",x);
        break;
         case 4:
        printf("number of days in %d is 30",x);
        break;
         case 5:
        printf("number of days in %d is 31",x);
        break;
         case 6:
        printf("number of days in %d is 30",x);
        break;
         case 7:
        printf("number of days in %d is 31",x);
         case 8:
        printf("number of days in %d is 31",x);
        break;
         case 9:
        printf("number of days in %d is 30",x);
        break;
         case 10:
        printf("number of days in %d is 31",x);
        break;
         case 11:
        printf("number of days in %d is 30",x);
        break;
         case 12:
        printf("number of days in %d is 31",x);
        break;
        default:
        printf("Entered number is invalid");

    }
return 0;
}
