// Write a program to check whether a given number is a Prime number or not

#include <stdio.h>
int main()
{
    int num, flag = 0;
    printf("Enter a number");
    scanf("%d", &num);
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("prime number");
    else
        printf("not a prime");
    return 0;
}