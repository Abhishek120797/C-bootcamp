#include<stdio.h>
int main()
{
    int i,j,x;
    for(i=1;i<=7;i++)
    {
        x='A';
        for(j=1;j<=13;j++)
        {
            if(j<=8-i||j>=6+i)
            {
                printf("%c",x);
                j<7?x++:x--;
            }
            else{
                printf(" ");
                if(j==7)
                   x--;

            }
        }
        printf("\n");
    }
return 0;
}
