#include<stdio.h>
int add(int);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("sum of first %d natural number is %d",num,add(num));
    return 0;
}

//recursive function
int add(int n)
{
    int sum=0;
    if(n>=1)
       sum=n+add(n-1);
return sum;
}
