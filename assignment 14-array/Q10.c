#include<stdio.h>
int main()
{
  int num[10],i,swap[10];
  printf("Enter 10 numbers : ");
  for(i=0;i<10;i++)
  {
    scanf("%d",&num[i]);
    swap[i]=num[i];
  }
    for(i=0;i<10;i++)
        printf("%d ",swap[i]);
return 0;
}
