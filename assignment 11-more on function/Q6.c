#include <stdio.h>
void print_prime(int, int);
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    print_prime(num1, num2);
    return 0;
}

void print_prime(int num1, int num2)
{
    for (int num = (num1 < num2 ? num1 : num2); num <= (num1 > num2 ? num1 : num2); num++)
    {
        for (int i = num / 2; i > 0; i--)
        {
            if (num % i == 0)
            {
                if (i > 1)
                    break;
                else
                    printf("%d ", num);
            }
        }
    }
}