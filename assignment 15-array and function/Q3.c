#include<stdio.h>
int sort();	//function decleration
int main()
{
    int i,a[10]={3,3,6,8,9,12,7,4,5,5};
    a[10]=sort(a,10);		//function call
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}
//function define
int sort(int b[],int size)
{
    int temp,i,j;
        for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
            if(b[i]<b[j])
            {
                temp=b[j];
                b[j]=b[i];
                b[i]=temp;
            }
    }
  return b;
}
