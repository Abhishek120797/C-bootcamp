#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    switch(num>0)
    {
    case 1:num=num-num-num;
        printf("number is converted into negative number %d",num);
        break;
    case 0:switch(num<0)
            {
                case 1:num=num-num-num;
                    printf("number is converted into positive number %d",num);
                break;
                case 0:printf("0 is neither positive or nor negative\ninvalid number");
                break;
            }
    }
    return 0;
}
