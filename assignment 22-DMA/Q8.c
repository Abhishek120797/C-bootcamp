#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;
    ptr = (int *)malloc(sizeof(int));
    *ptr = 10;
    printf("Before free %d\n", *ptr);
    free(ptr);
    printf("After free %d", *ptr); // dangling pointer
    return 0;
}