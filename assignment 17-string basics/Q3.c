#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,count=0;
    printf("Enter your name : ");
    fgets(str,50,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            count++;
    }
    printf("in your name number of vowels is %d ",count);
    return 0;
}
