#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    //first matrix
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
//sum of right diagonal of matrix
for(i=0;i<3;i++)
        sum=sum+a[i][i];
    printf("sum of right diagonal of matrix is %d",sum);
return 0;
}
