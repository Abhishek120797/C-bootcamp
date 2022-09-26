#include<stdio.h>
#include<string.h>
char* lower();
int main()
{
    char a[100];
    printf("Enter a string : ");
    fgets(a,100,stdin);
    printf("%s",lower(a));
    return 0;
}
char* lower(char str[])
{
    int i;
    for(i=0;str[i];i++)
        if(str[i]>=97 && str[i]<=122)
            str[i]=str[i]-32;
    return str;
}
