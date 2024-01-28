// Write a function to transform a string into lowercase

#include <stdio.h>

void strlower(char str[])
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
}

int main()
{
    char chr[100];
    printf("Enter a string: ");
    fgets(chr, 100, stdin);
    strlower(chr);
    printf("%s", chr);
    return 0;
}
