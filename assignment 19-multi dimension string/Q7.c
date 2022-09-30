#include<stdio.h>
#include<string.h>
int main()
{
    char ip[4][25],*byte,temp[25];
    int num,i,flag;
    printf("enter 4 ip address\n");
    for(i=0;i<4;i++)
        gets(ip[i]);
    printf("list of valid ip address\n");
    for(i=0;i<4;i++)
    {
        strcpy(temp,ip[i]);
        byte=(strtok(temp,"."));
        flag=0;
        while(byte!=NULL)
        {
            num=atoi(byte);
            if(num>=0 && num<=255)
            {
                flag++;
            }
            byte=strtok(NULL,".");
        }
        if(flag==4)
        {
            printf("%s\n",ip[i]);
        }
    }
    return 0;
}
