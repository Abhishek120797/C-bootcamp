#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    printf("before pointing %d\n",*ptr);
    *ptr=100;
    printf("Befor free %d\n",*ptr);
    free(ptr);
    printf("After free %d",*ptr);
    return 0;
}