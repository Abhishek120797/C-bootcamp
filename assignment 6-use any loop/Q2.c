// Write a program to calculate sum of first N even natural numbers

#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter a nunmber:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i * 2;
    }
    printf("%d", sum);
    return 0;
}