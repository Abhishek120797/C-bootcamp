// Write a recursive function to print first N terms of Fibonacci series

#include <stdio.h>
int fibb(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
        printf("%d ", fibb(i));
    return 0;
}

int fibb(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fibb(n - 1) + fibb(n - 2);
}