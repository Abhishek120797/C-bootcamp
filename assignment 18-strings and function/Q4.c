#include <stdio.h>

void strupper(char str[])
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
}

int main()
{
    char chr[100];
    printf("Enter a string: ");
    fgets(chr, 100, stdin);
    strupper(chr);
    printf("%s", chr);
    return 0;
}
