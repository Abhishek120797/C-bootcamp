// Write a program to check whether a given number is a three-digit number or not.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 1000 && num > 99)
        printf(" three digit number");
    else
        printf("not three digit number");
    return 0;
}