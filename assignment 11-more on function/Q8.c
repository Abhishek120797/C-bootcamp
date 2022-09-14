#include<stdio.h>
//function decleration
int combinaton(int,int);
int factorial(int);
void pascal(int);
//main function
int main()
{
    int length;
    printf("Enter length of pascal trangle : ");
    scanf("%d",&length);
    pascal(length);  //pascal function call
    return 0;
}
//pascal function (TSRN)
void pascal(int lin)
{
int i,j,k,r;
for(i=1;i<=lin;i++)
    {
        k=1;
        r=0;
        for(j=1;j<=2*lin-1;j++)
            if(j>=lin+1-i && j<=lin-1+i &&k)
            {
                printf("%d",combinaton(i-1,r));   //combination fuction call
                k=0;
                r++;
            }
            else
            {
                printf(" ");
                k=1;
            }
        printf("\n");
    }
    return 0;
}

//combination function
int combinaton(int n,int r)
{
 return  factorial(n)/(factorial(r)*factorial(n-r));   //factorial function call
}
//factorial function
int factorial(int x)
{
    int fact=1,i;
    for(i=1;i<=x;i++)
        fact=fact*i;
    return fact;
}
