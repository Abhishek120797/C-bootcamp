#include<stdio.h>
void primen();
int main()
{
    int num1,num2;
    printf("Enter initial number : ");
    scanf("%d",&num1);
    printf("Enter last number : ");
    scanf("%d",&num2);
    primen(num1,num2);
    return 0;
}
//function
void primen(int x,int y)
{
    int j,i,flag;
    if(x==1)
        x+=1;
     for(j=x;j<=y;j++)
     {
         flag=0;
         for(i=2;i<j;i++)
         {
             if(j%i==0)
             {
                 flag=1;
                 break;
             }

         }
         if(flag==0)
             {
                printf("%d ",j);
             }
     }
}
