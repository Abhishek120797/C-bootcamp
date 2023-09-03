#include <stdio.h>
int square(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("sum of square of first %d natural number is %d", num, square(num));
    return 0;
}

int square(int n)
{
    if (n == 1)
        return 1;
    else
        return square(n - 1) + n * n;
}