// Write a program to calculate sum of cubes of first N natural numbers

#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter a nunmber:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i * i * i;
    }
    printf("%d", sum);
    return 0;
}