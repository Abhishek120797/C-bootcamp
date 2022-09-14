#include<stdio.h>
int addodd(int);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("sum of first %d odd natural number is %d",num,addodd(num));
    return 0;
}

//recursive function
int addodd(int n)
{
    int sum=0;
    if(n>=1)
       sum=n*2-1+addodd(n-1);
return sum;
}
