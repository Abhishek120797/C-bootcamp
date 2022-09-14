#include<stdio.h>
int addeven(int);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("sum of first %d Even natural number is %d",num,addeven(num));
    return 0;
}

//recursive function
int addeven(int n)
{
    int sum=0;
    if(n>=1)
       sum=n*2+addeven(n-1);
return sum;
}
