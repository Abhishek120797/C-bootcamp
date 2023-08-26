#include <stdio.h>
int main()
{
    int i, j, x;
    for (i = 1; i <= 5; i++)
    {
        x = 65;
        for (j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= i + 4)
            {
                printf("%c", x);
                if (j < 5)
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