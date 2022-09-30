#include<stdio.h>
#include<string.h>
int main()
{
    char user_pass[5][2][25];
    char user[25],pass[25];
    int i,j,flag=0;
    for(i=0;i<5;i++)
    {
        printf("Enter %d user name : ",i+1);
        for(j=0;j<2;j++)
        {
            if(j==1)
                printf("Enter password : ");
        gets(user_pass[i][j]);
        }
    }
    printf("Enter your user name to log in: ");
    gets(user);
    printf("Enetr your password : ");
    gets(pass);
    for(i=0;i<5;i++)
    {
        if(strcmp(user_pass[i][0],user)==0 && strcmp(user_pass[i][1],pass)==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("<<<login succesfull");
    else
        printf("incorrect username password");
    return 0;
}
