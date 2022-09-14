#include<stdio.h>
void factor(int);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    factor(num);
    return 0;
}
//function
void factor(int x)
{
    int i,j,flag;
    for(i=2;i<=x;i++)
    {
        if(x%i==0)
        {
            flag=0;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                printf("%d ",i);
        }
    }
}
