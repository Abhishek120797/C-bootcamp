#include<stdio.h>
int main()
{
    float unit,bill,total;
    printf("please enter your electricity unit charges\nunit=");
    scanf("%f",&unit);

    switch(unit<=50)
    {
    case 1:bill=unit*0.50;
            break;
    case 0:switch(unit<=150)
            {
            case 1:bill=unit*0.75;
                    break;
            case 0:switch(unit<=250)
                    {
                    case 1:bill=unit*1.20;
                            break;
                    case 0:bill=unit*1.50;
                            break;
                    }
            }
    }
    total=bill+bill*20/100;
    printf("Total electricity bill is %.2f",total);
    return 0;
}
