#include<stdio.h>
int minnum();	//function decleration
int main()
{
    int a[10]={3,3,6,8,9,12,7,4,5,5};
    printf("%d is smallest number in array",minnum(a,10));	//function call
    return 0;
}
//function define
int minnum(int b[],int size)
{
    int i,min;
    min=b[0];
    for(i=0;i<size;i++)
        if(b[i]<min)
            min=b[i];
  return min;
}
