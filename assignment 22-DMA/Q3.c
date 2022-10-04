#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *num,size,i,sum=0;
    printf("Enter how many numbers do you have to get the sum: ");
    scanf("%d",&size);
    num=(int*)malloc(size*sizeof(int));
    printf("Enter numbers :");
    for(i=0;i<size;i++)
    {
        scanf("%d",(num+i));
        sum+=*(num+i);
    }
    printf("sum of numbers is %d",sum);
    free(num);
    return 0;
}