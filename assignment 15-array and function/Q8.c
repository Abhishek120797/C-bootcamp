// Write a function in C to print all unique elements in an array.

#include <stdio.h>
void uniqueElement(int[], int);
int main()
{
    int num[100], length;
    printf("how many number you want to enter: ");
    scanf("%d", &length);

    printf("Enter numbers: ");
    for (int i = 0; i < length; i++)
        scanf("%d", &num[i]);

    uniqueElement(num, length);
    return 0;
}

void uniqueElement(int n[], int l)
{
    int temp[100] = {0};
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (n[i] == n[j])
            {
                temp[n[i]]++;
            }
        }
    }
    for (int i = 0; i < 100; i++)
    {
        if (temp[i] == 1)
            printf("%d ", i);
    }
}