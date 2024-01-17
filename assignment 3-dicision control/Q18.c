// Write a program which takes the month number as an input and display number of
// days in that month

#include <stdio.h>
int main()
{
    int num;
    printf("Enter month number : ");
    scanf("%d", &num);
    if (num == 1 || num == 3 || num == 5 || num == 7 || num == 8 || num == 10 || num == 12)
        printf("31 days");
    else if (num == 4 || num == 6 || num == 9 || num == 11)
        printf("30 days");
    else if (num == 2)
        printf("28 days");
    else
        printf("Invalid month number");
    return 0;
}