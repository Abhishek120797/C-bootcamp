#include <stdio.h>
int main()
{
    int num, sum = 1;
    printf("Enter a nunmber:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum = sum * i;
    }
    printf("%d", sum);
    return 0;
}