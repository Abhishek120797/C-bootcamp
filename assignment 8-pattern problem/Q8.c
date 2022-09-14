#include<stdio.h>
int main()
{
    int j,i,x;
    for(i=1;i<=4;i++)
    {
        x=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
            {
                printf("%d",x);
                   if(j<4)
                   x++;
                else
                    x--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
return 0;
}
