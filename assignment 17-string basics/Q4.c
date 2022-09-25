#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i;
    printf("Enter your name : ");
    fgets(str,50,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]>=97 && str[i]<=122)
            str[i]=str[i]-32;
    }
    printf("%s",str);
    return 0;
}
