#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    for (int i = num1 < num2 ? num1 : num2; i > 0; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            if (i == 1)
                printf("co-prime number");
            else
                printf("not a co-prime number");
            break;
        }
    }
    return 0;
}