// Write a function in C to read n number of values in an array and display it in reverse
// order.

#include <stdio.h>
void printReverse(int[], int);
int main()
{
    int num[100], length;
    printf("how many number you want to enter: ");
    scanf("%d", &length);

    printf("Enter numbers: ");
    for (int i = 0; i < length; i++)
        scanf("%d", &num[i]);

    printReverse(num, length);

    return 0;
}

void printReverse(int n[], int l)
{
    for (int i = l - 1; i >= 0; i--)
        printf("%d ", n[i]);
}