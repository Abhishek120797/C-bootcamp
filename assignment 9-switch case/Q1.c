// Write a program which takes the month number as an input and display
// number of days in that month

#include <stdio.h>
int main()
{
    int num;
    printf("Enter month number : ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days in %dth month", num);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days in %dth month", num);
        break;
    case 2:
        printf("28 or 29 days in %dth month", num);
        break;
    default:
        printf("You entered wrong month number please Enter number between '1' to '12'");
        break;
    }
    return 0;
}