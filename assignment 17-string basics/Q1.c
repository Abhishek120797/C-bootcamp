#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i;
    printf("Enter your name : ");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    printf("size of string is %d",i);
    return 0;
}
