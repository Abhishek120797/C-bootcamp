#include<stdio.h>
int adjecentrepeat();	//function decleration
int main()
{
    int i,a[12]={1,2,3,4,4,5,6,2,1,3};
    printf("%d",adjecentrepeat(a));     //function call
    return 0;
}
//function define
int adjecentrepeat(int b[])
{
    int i;
for(i=0;i<9;i++)
    if(b[i]==b[i+1])
        return b[i];
}
