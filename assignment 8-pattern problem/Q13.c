#include <stdio.h>
int main()
{
    int i, j, x;
    for (i = 1; i <= 7; i++)
    {
        x = 65;
        for (j = 1; j <= 13; j++)
        {
            if (j <= 8 - i || j >= 6 + i)
            {
                printf("%c", x);
                if (j < 7)
                    x++;
                else
                    x--;
            }
            else
            {
                printf(" ");
                if (j < 7)
                    x++;
                else
                    x--;
            }
        }
        printf("\n");
    }
    return 0;
}