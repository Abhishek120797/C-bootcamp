// Write a function to find the next prime number of a given number. (TSRS)

#include <stdio.h>
int next_prime(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d is next prime number", next_prime(num));
    return 0;
}
int next_prime(int num)
{
    int flag = 0;
    for (num = num + 1; 1; num++)
    {
        for (int i = num / 2; i > 0; i--)
        {
            if (num % i == 0)
            {
                if (i > 1)
                    break;
                else
                    flag = 1;
            }
        }
        if (flag == 1)
            return num;
    }
}