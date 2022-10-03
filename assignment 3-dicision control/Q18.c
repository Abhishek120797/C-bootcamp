#include<stdio.h>
int main()
{
    int N;
    printf("Enter month number");
    scanf("%d",&N);
    if(N==4 || N==6 || N==9 || N==11)
    {
        printf("number of days is 30");
    }
    else
    {
        if(N==1 || N==3 || N==5 || N==7 || N==8 || N==10 || N==12)
        {
            printf("number of days is 31");
        }
        else
        {
            if(N==2)
            {
                printf("number of days 28 or 29");
            }
            else
            {
                printf("invaid month number");
            }
        }
    }
    return 0;
}
