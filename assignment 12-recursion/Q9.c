// Write a recursive function to print octal of a given decimal number

#include <stdio.h>
void print_O(int);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    print_O(num);
    return 0;
}

void print_O(int n)
{
    if (n >= 1)
    {
        print_O(n / 8);
        printf("%d", n % 8);
    }
}