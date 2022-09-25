#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int freq[150]={0},i=0;
    printf("Enter a string :");
    fgets(str,50,stdin);
    while(i<strlen(str)-1)
    {
        freq[str[i]]++;
        i++;
    }
    for(i=0;i<150;i++)
        if(freq[i]!=0)
            printf("%c ==> %d\n",i,freq[i]);
    return 0;
}
