#include<stdio.h>
void fibonacci();
int main()
{
    int n;
    printf("Enter anumber : ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
//function
void fibonacci(int x)
{
    int term=0,a=-1,b=1,sum;
    while(term<=x)
    {
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
        term++;
    }
}
