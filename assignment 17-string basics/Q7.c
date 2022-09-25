#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,alpha=0,digit=0,chare=0;
    printf("Enter your name : ");
    fgets(str,100,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122)
            alpha++;
        else
        {
            if(str[i]>=48 && str[i]<=57)
                digit++;
            else
                chare++;
        }
    }
    printf("total no of alphabet is %d\n",alpha);
    printf("total no of digit is %d\n",digit);
    printf("total no of special charecter is %d\n",chare-1);
    return 0;
}
