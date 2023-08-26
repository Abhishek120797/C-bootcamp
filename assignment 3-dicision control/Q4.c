#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num & 1 == 1)
        printf("odd number");
    else
        printf("even number");
    return 0;
}