#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],t;
    int i=0,j;
    printf("Enter your name : ");
    fgets(str,50,stdin);
    j=strlen(str)-1;
    while(i<=j)
        {
            t=str[i];
            str[i]=str[j];
            str[j]=t;
            i++;
            j--;
        }
    printf("%s",str);
    return 0;
}
