// Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.

#include <stdio.h>
int occrs(int[], int);

int main()
{
    int num[100], length;
    printf("how many number you want to enter: ");
    scanf("%d", &length);

    printf("Enter numbers: ");
    for (int i = 0; i < length; i++)
        scanf("%d", &num[i]);

    int duplicate = occrs(num, length);

    if (duplicate != -1)
        printf("The first adjacent duplicate value is: %d\n", duplicate);
    else
        printf("No adjacent duplicates found in the array.\n");
    return 0;
}

int occrs(int n[], int l)
{
    for (int i = 0; i < l - 1; i++)
    {
        if (n[i] == n[i + 1])
            return n[i];
    }
    return -1;
}