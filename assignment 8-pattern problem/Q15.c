#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==6-i||j==5)
            {
                printf("*");
            }
            else
                printf(" ");

        }
        printf("\n");
    }
    printf("*****");
return 0;
}
