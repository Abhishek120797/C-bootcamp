#include<stdio.h>
#include<string.h>
int main()
{

    char a[10][25],b[25];
    int i,flag=0;
    printf("Enter list of 10 strings :");
    for(i=0;i<10;i++)
        gets(a[i]);
    printf("Enter a string to search : ");
        gets(b);
    for(i=0;i<10;i++)
    {
        if(strcmpi(a[i],b)==0)
        {
            printf("string found");
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("string not found");
    return 0;
}
