// Write a function to print first N prime numbers (TSRN)

#include <stdio.h>
void print_prime(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    print_prime(n);
    return 0;
}

void print_prime(int n)
{
    int count = 0;
    for (int num = 0; count != n; num++)
    {
        for (int i = num - 1; i > 0; i--)
        {
            if (num % i == 0)
            {
                if (i > 1)
                    break;
                else
                {
                    printf("%d ", num);
                    count++;
                }
            }
        }
    }
}