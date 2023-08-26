#include <stdio.h>
int main()
{
    int x;
    printf("Enter day number");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("MONDAY is good day to start a week");
        break;
    case 2:
        printf("TUESDAY is not so bad. It is a sign that I have somehow survived Monday");
        break;
    case 3:
        printf("This must be the WEDNESDAY ever");
        break;
    case 4:
        printf("It is th thankfull THURSDAY I am so blessed to be here today");
        break;
    case 5:
        printf("FRIDAY afternoon looks like haven");
        break;
    case 6:
        printf("SHATURDAY have a Great weekend");
        break;
    case 7:
        printf("SUNDAY clears the rust of the whole week");
        break;
    }
    return 0;
}
