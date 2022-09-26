#include<stdio.h>
#include<string.h>
char* reverse();
int main()
{
    char a[50];
    printf("Enter a string : ");
    fgets(a,50,stdin);
    printf("%s",reverse(a));
    return 0;
}

char* reverse(char str[])
{
    int i,j,t;
    j=strlen(str)-1;
        while(i<=j)
            {
                t=str[i];
                str[i]=str[j];
                str[j]=t;
                i++;
                j--;
            }
    return str;
}
