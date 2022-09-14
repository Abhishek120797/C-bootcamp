#include<stdio.h>
int main()
{
    int j,i,x;
    for(i=1;i<=4;i++)
    {
        x=1;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
            {
                printf("%d",x);
                if(j<5-i)
                    x++;
                else
                    x--;

            }
            else
                printf(" ");
                if(j==i+2)
                    x++;
        }
        printf("\n");
    }
return 0;
}
