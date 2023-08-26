#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 5 == 0)
        printf("divisibal by 5");
    else
        printf("Not divisibal by 5");
    return 0;
}