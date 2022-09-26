#include<stdio.h>
#include<string.h>
int str_len();
int main()
{
    char a[100];
    printf("Enter a string : ");
    fgets(a,100,stdin);
    printf("length of a string is %d",str_len(a));
    return 0;
}
int str_len(char str[])
{
    int i;
    for(i=0;str[i];i++);
    return i-1;
}
