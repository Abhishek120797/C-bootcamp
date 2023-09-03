#include <stdio.h>
int max(int *a, int *b)
{
    if (*a >= *b)
        return *a;
    else
        return *b;
}

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("%d is max", max(&num1, &num2));

    return 0;
}