#include<stdio.h>
void frequency();     //function decleration
int main()
{
    int a[10]={1,2,3,1,2,4,5,3,6,6};
    frequency(a);    //function call
    return 0;
}
//function define
void frequency(int b[])
{
    int c[10]={0},i;
    for(i=0;i<10;i++)
        c[b[i]]++;
    for(i=0;i<10;i++)
        if(c[i]!=0)
            printf("%d = %d\n",i,c[i]);
}
