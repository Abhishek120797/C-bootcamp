#include<stdio.h>
int maxnum();	//function decleration
int main()
{
    int a[10]={2,3,6,8,9,12,7,1,4,5};
    printf("%d is greatest number in array",maxnum(a,10));	//function call
    return 0;
}
//function define
int maxnum(int b[],int size)
{
    int i,max=0;
    for(i=0;i<size;i++)
        for(i=0;i<size;i++)
            if(b[i]>max)
                max=b[i];
  return max;
}
