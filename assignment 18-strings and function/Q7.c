#include<stdio.h>
#include<string.h>
palindrome();
int main()
{
    char a[50];
    printf("Enter a string : ");
    fgets(a,50,stdin);
    palindrome(a);
    return 0;
}
palindrome(char str[])
{
    int l,i;
    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        if(str[i]!=str[l-2-i])
        {
            printf("Striing is not palindrome");
            break;
        }
    }
    if(i==l/2)
        printf("string is palindrome");
}
