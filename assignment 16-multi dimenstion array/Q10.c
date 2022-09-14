#include<stdio.h>
int main()
{
    int a[4][4]={1,1,0,0,0,1,0,0,0,1,1,1,1,0,0,0},i,j,max=0,count,index;
    for(i=0;i<4;i++)
        {
        printf("[");
        for(j=0;j<4;j++)
            printf("%d ",a[i][j]);
        printf("]\n");
        }
    for(i=0;i<4;i++)
    {
        count=0;
        for(j=0;j<4;j++)
        {
            if(a[i][j]==1)
                count++;
        }
        if(count>max)
        {
            max=count;
            index=i+1;
        }
    }
    printf("%drd row has maximum 1s",index);
    return 0;
}
