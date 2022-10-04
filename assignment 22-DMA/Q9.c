#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,size;
    printf("Enter size of block : ");
    scanf("%d",&size);
    ptr=(int*)malloc(size);
    if(ptr==NULL)
        printf("Memory allocation failed");
    else
        printf("memory alocated succesefully");
    return 0;
}