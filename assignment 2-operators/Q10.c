#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    num = num - num % 10;
    printf("%d", num);
    return 0;
}