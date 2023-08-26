#include <stdio.h>
int main()
{
    int h, m;
    printf("Enter time in HH:MM format: ");
    scanf("%d:%d", &h, &m);
    printf("%d Hours and %d Minutes", h, m);
    return 0;
}