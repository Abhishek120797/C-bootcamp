#include<stdio.h>
void swap(char**,char**);
int main()
{
    char *a[50],*b[50];
    printf("Enter string a : ");
    gets(a);
    printf("Enter string b :");
    gets(b);
    swap(&a,&b);
    printf("a = %s\nb = %s",a,b);
    return 0;
}
void swap(char **x,char **y)
{
    char *temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
