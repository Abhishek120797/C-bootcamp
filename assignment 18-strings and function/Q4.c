#include<stdio.h>
#include<string.h>
char* upper();
int main()
{
    char a[100];
    printf("Enter a string : ");
    fgets(a,100,stdin);
    printf("%s",upper(a));
    return 0;
}
char* upper(char str[])
{
    int i;
    for(i=0;str[i];i++)
        if(str[i]>=65 && str[i]<=90)
            str[i]=str[i]+32;
    return str;
}
