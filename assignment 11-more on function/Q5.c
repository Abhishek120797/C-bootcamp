#include<stdio.h>
void printn(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printn(n);
    return 0;
}
//function
void printn(int x)
{
    int j,count=1,i,flag;
    for(j=2;count<=x;j++)
    {
        flag=0;
        for(i=2;i<j;i++)
        {
            if(j%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            count++;
            printf("%d ",j);
        }
    }
}
