#include <stdio.h>
int lcm(int, int);
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("LCM of %d and %d is %d", num1, num2, lcm(num1, num2));
    return 0;
}

int lcm(int num1, int num2)
{
    for (int i = num1 < num2 ? num1 : num2; 1; i++)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            return i;
        }
    }
}