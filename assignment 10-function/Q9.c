#include <stdio.h>
int check(int, int);
int main()
{
    int num, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a digit: ");
    scanf("%d", &digit);
    if (check(num, digit))
        printf("%d is present in %d", digit, num);
    else
        printf("%d is not present in %d", digit, num);
    return 0;
}

int check(int n, int d)
{
    if (n == 0 && d == 0)
        return 1;
    while (n != 0)
    {
        if (n % 10 == d)
            return 1;
        else
            n = n / 10;
    }
    return 0;
}
