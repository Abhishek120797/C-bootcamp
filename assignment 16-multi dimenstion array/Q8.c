#include<stdio.h>
int main()
{
    int a[3][3],i,j;
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
    printf("upper trangular of matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            if(j>=i)
            printf("%d",a[i][j]);
            else
                printf(" ");
        printf("\n");
    }
    return 0;
}
