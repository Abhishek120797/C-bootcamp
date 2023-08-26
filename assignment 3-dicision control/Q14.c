#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 7 == 0 && num % 3 == 0)
        printf("number is divisibal by 7 and 3");
    else if (num % 7 == 0)
        printf("number is divisibal by 7");
    else if (num % 3 == 0)
        printf("number is divisibal by 3");
    else
        printf("number is not divisibal by 7 and 3");
    return 0;
}