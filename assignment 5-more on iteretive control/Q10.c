#include <stdio.h>
int main()
{
    int num;
    printf("Enter a nunmber:");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
        printf("%d ", i * num);
    return 0;
}