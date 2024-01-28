// Write a program to print the elements of an array in reverse order.

#include <stdio.h>
#include <string.h>

void print_reverse(int *n, int l)
{
    for (int i = l - 1; i >= 0; i--)
    {
        printf("%d ", *(n + i));
    }
}

int main()
{
    int num[100], l;
    printf("how many number you want to enter: ");
    scanf("%d", &l);

    for (int i = 0; i < l; i++)
        scanf("%d", &num[i]);

    print_reverse(num, l);

    return 0;
}
