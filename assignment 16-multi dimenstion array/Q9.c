#include<stdio.h>
int main()
{
    int a[3][3],i,j,count=0;
    printf("Enter matrix elements : ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
                count++;
        }
    for(i=0;i<3;i++)
        {
        printf("[");
        for(j=0;j<3;j++)
            printf("%d ",a[i][j]);
        printf("]\n");
        }
    if(count<=4)
        printf("not sparse matrix");
    else
        printf("sparse matrix");
    return 0;
}
