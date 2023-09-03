#include <stdio.h>

int main()
{
    char chr[5][50];
    int count;

    printf("Enter 5 string: ");
    for (int i = 0; i < 5; i++)
        fgets(chr[i], 50, stdin);

    for (int i = 0; i < 5; i++)
    {
        count = 0;
        for (int j = 0; chr[i][j]; j++)
        {
            if ((chr[i][j] == 'A') || (chr[i][j] == 'E') || (chr[i][j] == 'I') || (chr[i][j] == 'O') || (chr[i][j] == 'U') || (chr[i][j] == 'a') || (chr[i][j] == 'e') || (chr[i][j] == 'i') || (chr[i][j] == 'o') || (chr[i][j] == 'u'))
            {
                count++;
            }
        }
        printf("%s=%d\n", chr[i], count);
    }
    return 0;
}