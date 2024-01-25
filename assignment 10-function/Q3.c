// Write a function to check whether a given number is even or odd. Return 1 if the
//  number is even, otherwise return 0. (TSRS)

#include <stdio.h>
int check(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (check(num))
        printf("Even number");
    else
        printf("odd number");
    return 0;
}

int check(int num)
{
    return num % 2 == 0 ? 1 : 0;
}