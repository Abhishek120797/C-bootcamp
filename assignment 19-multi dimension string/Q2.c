#include <stdio.h>
#include <string.h>

int main()
{
    char str[10][20], temp[20];

    printf("Enter 10 city names: ");
    for (int i = 0; i < 10; i++)
        fgets(str[i], 20, stdin);

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    for (int i = 0; i < 10; i++)
        printf("%s", str[i]);
    return 0;
}