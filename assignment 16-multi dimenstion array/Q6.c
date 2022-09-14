#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum,R=1,C=1;
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
    printf("sum of rows\n");
    for(i=0;i<3;i++)
        {
        sum=0;
        for(j=0;j<3;j++)
            sum=sum+a[i][j];
        printf("sum of Row %d = %d\n",R++,sum);
        }
    printf("sum of columns\n");
    for(i=0;i<3;i++)
        {
        sum=0;
        for(j=0;j<3;j++)
            sum=sum+a[j][i];
        printf("sum of columns %d = %d\n",C++,sum);
        }
    return 0;
}
