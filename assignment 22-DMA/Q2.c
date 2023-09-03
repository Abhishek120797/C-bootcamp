#include <stdio.h>
#include <stdlib.h>
float avg(int *, int);

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

    printf("Average is %.2f", avg(num, size));

    return 0;
}

float avg(int *arr, int len)
{
    float sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum = sum + *(arr + i);
        ;
    }

    return sum / len;
}