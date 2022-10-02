#include<stdio.h>
int main()
{
    char str[100],*ptr;
    int i;
    printf("Enter a string : ");
    gets(str);
    ptr=&str;
    for(i=0;*(ptr+i);i++);
    printf("length of string is %d",i);
    return 0;
}
