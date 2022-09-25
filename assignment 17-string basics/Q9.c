#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,j,temp;
    printf("Enter a string : ");
    fgets(str,50,stdin);
    for(i=0;str[i];i++)
    {
        for(j=0;str[j];j++)
            if(str[i]<str[j])
            {
                temp=str[j];
                str[j]=str[i];
                str[i]=temp;
            }
    }
    printf("%s",str);
    return 0;
}
