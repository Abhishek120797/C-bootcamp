#include <stdio.h>
#include <string.h>

int main()
{
    char str[5][20];
    int flag, k;

    printf("Enter 5 string: ");
    for (int i = 0; i < 5; i++)
        fgets(str[i], 20, stdin);

    for (int i = 0; i < 5; i++)
    {
        flag = 0;
        k = strlen(str[i]) - 2;
        for (int j = 0; j <= k / 2; j++)
        {
            if (str[i][j] != str[i][k])
            {
                flag = 1;
                break;
            }
            else
            {
                k--;
            }
        }
        if (flag == 0)
        {
            printf("%s", str[i]);
        }
    }

    return 0;
}