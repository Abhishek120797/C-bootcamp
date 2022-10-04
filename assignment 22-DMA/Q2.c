#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,size,i,sum=0;
    float avg;
    printf("Enter how many numbers do you have to get the average: ");
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
    avg=sum/size;
    printf("averege of %d numbers is %.2f",size,avg);
    free(arr);
    return 0;
}