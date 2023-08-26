#include <stdio.h>
int main()
{
    int i, j, x;
    for (i = 1; i <= 4; i++)
    {
        x = 65;
        for (j = 1; j <= 7; j++)
        {
            if (j >= i && j <= 8 - i)
            {
                printf("%c", x);
                if (j < 4)
                    x++;
                else
                    x--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}