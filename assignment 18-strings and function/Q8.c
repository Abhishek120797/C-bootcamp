#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("Enter a string : ");
    fgets(a,100,stdin);
    printf("%d words in given string",count_word(a));
    return 0;
}
int count_word(char str[])
{
    int i,count=1;
    for(i=0;str[i];i++)
        if(str[i]==' ' && str[i+1]!=' ')
            count++;
    return count;
}
