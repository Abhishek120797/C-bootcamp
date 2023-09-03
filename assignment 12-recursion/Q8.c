#include <stdio.h>
void print_B(int);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    print_B(num);
    return 0;
}

void print_B(int n)
{
    if (n == 1)
        printf("1");
    else
    {
        print_B(n / 2);
        printf("%d", n % 2);
    }
}