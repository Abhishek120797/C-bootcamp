// Write a program to swap values of two int variables

#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers:\na= ");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("a=%d and b=%d", a, b);
    return 0;
}