#include<stdio.h>
int duplicate(); 	//function decleration
int main()
{
    int a[]={1,1,2,2,3,3,4,4,5,6,7,8};
    printf("total number of duplicate elements are %d",duplicate(a));    //function call
    return 0;
}
//function define
int duplicate(int b[])
{
int i,j,count=0;
for(i=0;i<11;i++)
    for(j=i+1;j<=11;j++)
        if(b[i]==b[j])
            count++;
return count;
}
