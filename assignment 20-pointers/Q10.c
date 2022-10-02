#include<stdio.h>
int main()
{
    char a[100],*ptr;
    int i,count=0;
    printf("Enter a string : ");
    gets(a);
    ptr=a;
    for(i=0;*(ptr+i)!='\0';i++)
        count++;
    for(i=count-1;i>=0;i--)
        printf("%c",*(ptr+i));
    return 0;
}
