#include<stdio.h>
int main()
{
    int num[10],i,j,temp;
    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++)
        scanf("%d",&num[i]);
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
            if(num[i]<num[j])
            {
                temp=num[j];
                num[j]=num[i];
                num[i]=temp;
            }
    }
        printf("%d is second smallest number in array",num[1]);
    return 0;
}
