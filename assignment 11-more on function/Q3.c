#include <stdio.h>
int check_prime(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (check_prime(num) == 1)
        printf("prime number");
    else
        printf("not a prime number");
    return 0;
}

int check_prime(int num)
{
    if (num == 0 || num == 1)
        return 0;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}