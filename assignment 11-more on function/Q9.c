// Write a program in C to find the square of any number using the function.

#include <stdio.h>
int square(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("square of %d is %d", num, square(num));
    return 0;
}

int square(int n)
{
    return n * n;
}