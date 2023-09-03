#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL, byte;

    printf("Enter size in bytes you want to allocate : ");
    scanf("%d", &byte);

    ptr = (int *)malloc(byte);
    if (ptr == NULL)
    {
        printf("memory allocation failed !");
        return 0;
    }
    printf("memory allocation success");
    return 0;
}