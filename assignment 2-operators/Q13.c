// . Write a program to take a three-digit number from the user and rotate its digits by
// one position towards the right.

#include <stdio.h>
int main()
{
    int num, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num % 10 * 100;
    num = temp + num / 10;
    printf("%d", num);
    return 0;
}