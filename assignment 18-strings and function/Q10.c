#include<stdio.h>
#include<string.h>
void repeated_char();
int main()
{
    char a[100];
    printf("Enter a string : ");
    fgets(a,100,stdin);
    repeated_char(a);
    return 0;
}
void repeated_char(char str[])
{
    int i,freq[256]={0};
    for(i=0;str[i];i++)
        freq[str[i]]++;
    for(i=0;i<256;i++)
    {
        if(freq[i]>1)
            printf("%c\n",i);
    }
}
