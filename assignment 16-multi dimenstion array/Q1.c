#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],sum[3][3],i,j;
    //first matrix
    printf("Enter first matrix elements : ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
        {
        printf("[");
        for(j=0;j<3;j++)
            printf("%d ",a[i][j]);
        printf("]\n");
        }
        //second matrix
    printf("Enter second matrix elements : ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
            for(i=0;i<3;i++)
        {
        printf("[");
        for(j=0;j<3;j++)
            printf("%d ",b[i][j]);
        printf("]\n");
        }
        //sum of matrix
    printf("sum of two matrix\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            sum[i][j] = a[i][j] + b[i][j];
    for(i=0;i<3;i++)
        {
        printf("[");
        for(j=0;j<3;j++)
            printf("%d ",sum[i][j]);
        printf("]\n");
        }
    return 0;
}
