#include<stdio.h>
int countdigit(int);
int count=0;  //global variable
int main()
{
int num;
printf("Enter a number : ");
scanf("%d",&num);
printf("number of digit in %d is %d",num,countdigit(num));
return 0;
}
int countdigit(int n)
{
    if(n!=0)
    {
        count++;	//global variable
        countdigit(n/10);
    }
    else
    return count;
}
