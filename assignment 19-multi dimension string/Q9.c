#include<stdio.h>
#include<string.h>
int factorial(int);
int main()
{
    int fact,num,flag=0,i;
    char user[5][30]={"abhishek","rakesh","aniket","avinash","ramkumar"};
    char user_name[30];
    printf("Enter user name : ");
    gets(user_name);
    for(i=0;i<5;i++)
    {
        if(strcmp(user[i],user_name)==0)
        {
            printf("authentication succesfull\n");
            printf("********factorial calculetor********\n");
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
    printf("enter a number ");
    scanf("%d",&num);
    fact=factorial(num);
    printf("factorial of %d is %d",num,fact);
    }
    else
    {
        printf("incorrect user name");
    }
    return 0;
}

int factorial(int x)
{
    int i,fac=1;
    for(i=x;i>=1;i--)
    {
        fac=fac*i;
    }
    return fac;
}
