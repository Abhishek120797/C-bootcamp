// Write a recursive function to calculate sum of first N odd natural numbers

#include <stdio.h>
int sum_odd(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("sum of first %d odd natural number is %d", num, sum_odd(num));
    return 0;
}

int sum_odd(int n)
{
    if (n == 1)
        return 1;
    else
        return sum_odd(n - 1) + n * 2 - 1;
}