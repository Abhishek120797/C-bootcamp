#include <stdio.h>
int main()
{
    int i, j;
    printf("*********");
    for (i = 1; i <= 4; i++)
    {
        printf("\n");
        for (j = 1; j <= 9; j++)
        {
            if (j == i + 1 || j == 9 - i)
                printf("*");
            else
                printf(" ");
        }
    }
    return 0;
}