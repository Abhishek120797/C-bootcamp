#include <stdio.h>

void count_char(char str[])
{
    int temp[255] = {0};
    for (int i = 0; str[i]; i++)
    {
        temp[str[i]]++;
    }

    for (int i = 0; i <= 255; i++)
    {
        if (temp[i] > 1)
            printf("%c\n", i);
    }
}

int main()
{
    char str[100];
    printf("Enter a string : ");
    gets(str);
    count_char(str);
    return 0;
}