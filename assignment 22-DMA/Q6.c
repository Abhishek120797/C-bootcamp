#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *num = NULL, large, size;

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

    large = *(num + 0);
    for (int i = 0; i < size; i++)
    {
        if (*(num + i) > large)
            large = *(num + i);
    }

    printf("\nlargest number is %d", large);
    return 0;
}