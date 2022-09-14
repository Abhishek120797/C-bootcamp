#include<stdio.h>
int hcf(int,int);
int main()
{
    int num1,num2;
    printf("Enter a first number : ");
    scanf("%d",&num1);
    printf("Enter a second number : ");
    scanf("%d",&num2);
    printf("HCF of %d and %d is %d",num1,num2,hcf(num1,num2));
    return 0;
}

//recursive function
int hcf(int n1,int n2)
{
    if(n1>n2)
    {
      n1=n1+n2;
      n2=n1-n2;
      n1=n1-n2;
    }
    if(n2%n1==0)
        return n1;
    else
        hcf(n1,n2%n1);
}
