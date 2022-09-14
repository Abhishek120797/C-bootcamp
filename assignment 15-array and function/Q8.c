#include<stdio.h>
void duplicate(); 	//function decleration
int main()
{
    int a[]={1,2,1,3,2,3,4,4,5,6,7,8};
    duplicate(a);	//function call
    return 0;
}
//function define
void duplicate(int b[])
{
int i,j,count;
for(i=0;i<12;i++)
{
    count=0;
    for(j=0;j<12;j++)
    {
      if(b[i]==b[j])
        count++;
    }
    if(count!=2)
        printf("%d ",b[i]);
}
}
