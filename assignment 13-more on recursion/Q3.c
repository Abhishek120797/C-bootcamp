#include <stdio.h>
int sum_even(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("sum of first %d even natural number is %d", num, sum_even(num));
    return 0;
}

int sum_even(int n)
{
    if (n == 1)
        return 1;
    else
        return sum_even(n - 1) + n * 2 - 1;
}