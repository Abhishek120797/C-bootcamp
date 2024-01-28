// Write a program to read a one dimensional array, print sum of all elements along with
//  inputted array elements using dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *num = NULL, sum = 0, size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    num = (int *)malloc(size * sizeof(int));
    if (num == NULL)
    {
        printf("memory allocation failed !");
        return 0;
    }

    printf("\nEnter %d numbers: ", size);
    for (int i = 0; i < size; i++)
        scanf("%d", num + i);

    for (int i = 0; i < size; i++)
        sum += *(num + i);

    for (int i = 0; i < size; i++)
        printf("%d ", *(num + i));

    printf("\nsum is %d", sum);
    return 0;
}