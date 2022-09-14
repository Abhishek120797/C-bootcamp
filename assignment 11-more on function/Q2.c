#include<stdio.h>
int HCF();
int main()
{
    int num1,num2,hcf;
    printf("Enter a number\nfirst number=");
    scanf("%d",&num1);
    printf("second number=");
    scanf("%d",&num2);
    hcf=HCF(num1,num2);
    printf("HCF of %d and %d is %d",num1,num2,hcf);
    return 0;
}
//function
int HCF(int x,int y)
{
 int i=x<y?x:y;
 for(i; i>1; i--)
 {
     if(x%i==0 && y%i==0)
        break;
 }
 return i;
}
