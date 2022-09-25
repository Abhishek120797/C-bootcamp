#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],copy[50]={0};
    int i;
    printf("Enter your name :");
    fgets(str,50,stdin);
    for(i=0;str[i];i++)
        copy[i]=str[i];
    printf("%s",copy);
    return 0;
}
