#include<stdio.h>
int addsquare(int);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("sum of square of first %d natural number is %d",num,addsquare(num));
    return 0;
}

//recursive function
int addsquare(int n)
{
    int sum=0;
    if(n>=1)
       sum=n*n+addsquare(n-1);
return sum;
}
