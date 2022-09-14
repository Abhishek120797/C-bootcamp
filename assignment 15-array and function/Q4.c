#include<stdio.h>
void rotation();     //function decleration
int main()
{
    int i,b[5]={32,29,40,12,70};
    printf("original array : ");
    for(i=0;i<5;i++)
        printf("%d ",b[i]);
    rotation(b);       //function call
    return 0;
}
//function define
void rotation(int a[])
{
    int i,n,j,dir,temp;
    printf("\nEnter postion number you want to rotate : ");
    scanf("%d",&n);
    printf("Enter 1 for left rotation or 0 for rigt rotation : ");
    scanf("%d",&dir);
    if(dir)  //left rotation
    {
        for(j=0;j<n;j++)
        {
            temp=a[0];
            for(i=0;i<4;i++)
            {
                a[i]=a[i+1];
            }
        a[i]=temp;
        }
        printf("After left rotaion :");
        for(i=0;i<5;i++)
            printf("%d ",a[i]);
    }
    else  //right rotation
    {
        for(j=0;j<n;j++)
        {
            temp=a[4];
            for(i=4;i>0;i--)
            {
                a[i]=a[i-1];
            }
        a[0]=temp;
        }
        printf("After right rotaion :");
        for(i=0;i<5;i++)
            printf("%d ",a[i]);
    }
}
