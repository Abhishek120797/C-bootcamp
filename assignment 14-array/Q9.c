#include<stdio.h>
int main()
{
  int num[10],i;
  printf("Enter 10 numbers : ");
  for(i=0;i<10;i++)
    scanf("%d",&num[i]);
   for(i=9;i>=0;i--)
    printf("%d ",num[i]);
return 0;
}
