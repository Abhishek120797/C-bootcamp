// Write a program to compute the sum of all elements in an array using pointers.

#include <stdio.h>
#include <string.h>

void sum_element(int *n, int l, int *s)
{
    for (int i = 0; i < l; i++)
        *s = *s + *(n + i);
}

int main()
{
    int num[100], l, sum = 0;
    printf("Enter how many numbers you want to enter: ");
    scanf("%d", &l);
    printf("Enter %d numbers:", l);
    for (int i = 0; i < l; i++)
        scanf("%d", &num[i]);

    sum_element(num, l, &sum);
    printf("%d", sum);
    return 0;
}