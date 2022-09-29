#include<stdio.h>
#include<string.h>
int main()
{
    char a[3][25];
    int i;
    printf("Enter 3 strings : ");
    for(i=0;i<3;i++)
        gets(a[i]);
    for(i=0;i<3;i++)
        printf("%s\n",a[i]);
    return 0;
}
