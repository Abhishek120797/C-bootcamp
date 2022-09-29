#include<stdio.h>
#include<string.h>
int main()
{
    char ip[4][25],*byte;
    int i,num,flag;
    printf("Enter 4 ip address : ");
    for(i=0;i<4;i++)
      gets(ip[i]);
    for(i=0;i<4;i++)
    {
        flag=0;
        byte=strtok(ip[i],".");
        while(byte!=NULL)
        {
            num=atoi(byte);
            if(num>=0 && num<=255)
                flag++;
        }
        if(flag==4)
            printf("%s\n",ip[i]);
    }
    return 0;
}
