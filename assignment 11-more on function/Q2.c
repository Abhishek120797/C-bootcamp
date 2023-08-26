#include <stdio.h>
int hcf(int, int);
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("HCF of %d and %d is %d", num1, num2, hcf(num1, num2));
    return 0;
}

int hcf(int num1, int num2)
{
    for (int i = num1 < num2 ? num1 : num2; i > 0; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
            return i;
    }
}