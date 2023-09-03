#include <stdio.h>
int sum(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("sum of first %d natural number is %d", num, sum(num));
    return 0;
}

int sum(int n)
{
    if (n == 1)
        return 1;
    else
        return sum(n - 1) + n;
}