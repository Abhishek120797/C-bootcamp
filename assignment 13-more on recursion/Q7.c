#include <stdio.h>
int hcf(int, int);
int main()
{
    int num1, num2;
    printf("Enter a number: ");
    scanf("%d %d", &num1, &num2);
    printf("HCF of %d and %d is %d", num1, num2, hcf(num1, num2));
    return 0;
}

int hcf(int n1, int n2)
{
    if (n1 == n2)
        return n1;
    if (n1 % n2 == 0)
        return n2;
    if (n2 % n1 == 0)
        return n1;
    if (n1 > n2)
        return hcf(n1 % n2, n2);
    else
        return hcf(n1, n2 % n1);
}