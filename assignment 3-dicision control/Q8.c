// Write a program to check whether a given year is a leap year or not.

#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            printf("Leap year");
        else
            printf("not a leap year");
    }
    else
    {
        if (year % 4 == 0)
            printf("leap year");
        else
            printf("not a leap year");
    }
    return 0;
}