#include <stdio.h>
int fact(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("factorial of %d is %d", num, fact(num));
    return 0;
}

int fact(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}