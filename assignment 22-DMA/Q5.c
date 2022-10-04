#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,size,i,sum=0;
    printf("Enter how many numbers do you have to get the sum: ");
    scanf("%d",&size);
    arr=(int*)calloc(size,sizeof(int));
    if(arr==NULL)
    {
        printf("Your memory is full");
    }
    printf("Enter numbers :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("sum of numbers is %d",sum);
    free(arr);
    return 0;
}