#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],mul[3][3],i,j,k,sum;
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
        //product of two matrix
    printf("product of two matrix\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
                sum=sum+a[i][k]*b[k][j];
            mul[i][j]=sum;
        }
    for(i=0;i<3;i++)
        {
        printf("[");
        for(j=0;j<3;j++)
            printf("%d ",mul[i][j]);
        printf("]\n");
        }
    return 0;
}
