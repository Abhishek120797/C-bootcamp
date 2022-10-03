#include<stdio.h>
int main()
{
    char x;
    printf("Enter one charecter : ");
    scanf("%c",&x);
    if(x>=97 && x<=122)
    {
        printf("Entered charecter is lowercase alphabet");
    }
    else
    {
        if(x>=65 && x<=90)
        {
            printf("Entered charecter is uppercase alphabet");
        }
        else
        {
            if(x>=48 && x<=57)
            {
                printf("Entered charecter is digit");
            }
            else
            {
                printf("Entered charecter is special charecter");
            }
        }
    }
    return 0;
}
