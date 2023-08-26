#include <stdio.h>
int main()
{
    int num, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a digit you want to append: ");
    scanf("%d", &digit);
    num = num * 10 + digit;
    printf("%d", num);
    return 0;
}