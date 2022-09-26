#include<stdio.h>
#include<string.h>
alphanum();
int main()
{
    char a[50];
    printf("Enter a string : ");
    fgets(a,50,stdin);
    alphanum(a);
    return 0;
}

alphanum(char str[])
{
    int i,alpha=0,num=0;
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
            alpha=1;
        if(str[i]>='0' && str[i]<='9')
            num=1;
    }
    if(num==1 && alpha==1)
        printf("string is alphanumeric");
    else
        printf("string is not alphanumeric");
}
