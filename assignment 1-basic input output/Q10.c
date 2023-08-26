#include <stdio.h>
int main()
{
    int d, m, y;
    printf("Enter date in DD/MM/YYYY format:");
    scanf("%d/%d/%d", &d, &m, &y);
    printf("Day-%d,Month-%d,Year-%d", d, m, y);
    return 0;
}
