#include<stdio.h>
void sort(int*,int);
int main()
{
    int a[10],i;
    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    sort(a,10);
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
 return 0;
}

void sort(int *x,int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(x[i]<x[j])
                {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
                }
        }
    }
}
