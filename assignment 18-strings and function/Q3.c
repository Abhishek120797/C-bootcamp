#include<stdio.h>
#include<string.h>
int compare();
int main()
{
    char a[50],b[50];
    int flag;
    printf("Enter first string : ");
    fgets(a,50,stdin);
    printf("Enter second string : ");
    fgets(b,50,stdin);
    flag=compare(a,b);
    if(flag==0)
        printf("both strings are same");
    else
        printf("both strings are not same");
    return 0;
}
int compare(char str_1[],char str_2[])
{
    int i,flag_c=0;
    for(i=0;str_1[i]!='\0' || str_2[i]!='\0';i++)
    {
        if(str_1[i]!=str_2[i])
        {
            flag_c=1;
            break;
        }
    }
    if(flag_c==1)
        return 1;
    else
        return 0;
}

