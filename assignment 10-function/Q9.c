#include<stdio.h>
int contain();
int main()
{
    int digit,num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Enter a digit : ");
    scanf("%d",&digit);
    if(contain(num,digit))
        printf("number contain digit");
    else
        printf("number did not contain digit");
    return 0;
}
//function
int contain(int x,int y)
{
    int check=0;
    while(x!=0)
    {
        check=x%10;
        if(check==y)
            return 1;
        else
            x=x/10;
    }
    return 0;
}
