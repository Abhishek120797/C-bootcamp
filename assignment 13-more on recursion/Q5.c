#include <stdio.h>
int sum(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("sum of digit of %d is %d", num, sum(num));
    return 0;
}

int sum(int n)
{
    if (n != 0)
        return sum(n / 10) + n % 10;
    else
        return 0;
}