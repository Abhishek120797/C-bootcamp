#include <stdio.h>
int main()
{
    int num;
    printf("Enter a nunmber:");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
        printf("%d ", i * 2 + 1);
    return 0;
}