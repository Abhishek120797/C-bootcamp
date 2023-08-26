#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter a number: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x >= y && x >= z)
        printf("%d is greatest number", x);
    else if (y >= x && y >= z)
        printf("%d is greatest number", y);
    else
        printf("%d is greatest number", z);

    return 0;
}