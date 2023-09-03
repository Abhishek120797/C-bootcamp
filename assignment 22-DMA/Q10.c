#include <stdio.h>
#include <stdlib.h>

int minimum(int *, int);
int maximum(int *, int);

int main()
{
    int size, *num = NULL;

    printf("Enter number of data you want to enter: ");
    scanf("%d", &size);

    num = (int *)calloc(size, sizeof(int));

    if (num == NULL)
    {
        printf("memory allocation failed\n");
        return 0;
    }

    printf("Enter data values: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", num + i);
    }

    printf("minimum is %d\n", minimum(num, size));
    printf("maximum is %d\n", maximum(num, size));

    return 0;
}

int minimum(int *arr, int len)
{
    int temp = *arr;

    for (int i = 0; i < len; i++)
    {
        if (*(arr + i) < temp)
            temp = *(arr + i);
    }

    return temp;
}

int maximum(int *arr, int len)
{
    int temp = *arr;

    for (int i = 0; i < len; i++)
    {
        if (*(arr + i) > temp)
            temp = *(arr + i);
    }

    return temp;
}