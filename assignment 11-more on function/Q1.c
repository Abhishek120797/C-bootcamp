#include<stdio.h>
int LCM();
int main()
{
    int num1,num2,lcm;
    printf("Enter a number\nfirst number=");
    scanf("%d",&num1);
    printf("second number=");
    scanf("%d",&num2);
   lcm=LCM(num1,num2);
    printf("LCM of %d and %d is %d",num1,num2,lcm);
    return 0;
}
//function
int LCM(int x,int y)
{
 int i;
 for(i=1;i<=x>y?x:y;i++)
 {
     if(i%x==0 && i%y==0)
        break;
 }
 return i;
}
