#include<stdio.h>
#include<string.h>
int main()
{
    char a[10][20]={"madam","level","racecar","abhishek","surat","cast","english","eye","train","malayalam"};
    int i,j,l,flag;
    for(i=0;i<10;i++)
    {
        flag=0;
        l=strlen(a[i]);
        for(j=0;a[i][j];j++)
        {
            if(a[i][j]!=a[i][l-1])
            {
             flag=1;
             break;
            }
            l--;
        }
        if(flag==0)
            printf("%s\n",a[i]);
    }
    return 0;
}
