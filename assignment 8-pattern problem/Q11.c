#include<stdio.h>
int main()
{
    int j,i,x;
    for(i=1;i<=5;i++)
    {
        x='A';
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            {
                printf("%c",x);
                if(j<5)
                    x++;
                else
                    x--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
return 0;
}
