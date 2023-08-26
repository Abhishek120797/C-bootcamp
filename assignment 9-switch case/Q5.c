#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("good");
        break;
    case 2:
        printf("good");
        break;
    case 3:
        printf("good");
        break;
    default:
        printf("Invalid");
        break;
    }
    return 0;
}