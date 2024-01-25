// Write a program in C to calculate the power of any number using recursion.

#include <stdio.h>
int power_cal(int, int);
int main()
{
    int base, power;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter power: ");
    scanf("%d", &power);
    printf("%d power %d is %d", base, power, power_cal(base, power));
    return 0;
}

int power_cal(int b, int p)
{
    if (p == 0)
        return 1;
    else
        return power_cal(b, p - 1) * b;
}