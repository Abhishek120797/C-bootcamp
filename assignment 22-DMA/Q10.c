#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,size,i,max,min;
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
    }
    max=arr[0];
    min=arr[0];
    for(i=1;i<size;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("maximum of numbers is %d\n",max);
    printf("minimum of numbers is %d",min);
    free(arr);
    return 0;
}