// Write a program in C to count the digits of a given number using recursion

#include <stdio.h>
int count(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("no of digit in %d is %d", num, count(num));
    return 0;
}

int count(int n)
{
    if (n == 0)
        return 0;
    else
        return count(n / 10) + 1;
}