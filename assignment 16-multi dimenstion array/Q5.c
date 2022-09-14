#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("Enter matrix elements : ");
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
    for(i=2;i>=0;i--)
        sum=sum+a[2-i][i];
    printf("sum of left diagonal of matrix is %d",sum);
    return 0;
}
