#include<stdio.h>
int adddigit(int);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("sum of digit of  %d number is %d",num,adddigit(num));
    return 0;
}

//recursive function
int adddigit(int n)
{
    int sum=0;
    if(n!=0)
    sum=(n%10)+adddigit(n/10);
return sum;
}
