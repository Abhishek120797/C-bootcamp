#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
        printf("%d is greater", num1);
    else if (num2 > num1)
        printf("%d is greater", num2);
    else
        printf("Equal=%d", num1);
    return 0;
}