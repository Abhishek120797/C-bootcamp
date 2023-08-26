#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
        printf("positive");
    else
        printf("non-positive");
    return 0;
}