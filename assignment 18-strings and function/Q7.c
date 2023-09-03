#include <stdio.h>

int strlen(char str[])
{
    int i;
    for (i = 0; str[i]; i++)
    {
    }
    return i - 1;
}

char strupper(char str)
{
    if (str >= 'a' && str <= 'z')
        return str - 32;
}

int palindrome(char str[])
{
    int l = strlen(str);
    for (int i = 0; i < l / 2; i++)
    {

        if (strupper(str[i]) != strupper(str[l - 1 - i]))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char chr[100];
    printf("Enter a string: ");
    fgets(chr, 100, stdin);
    if (palindrome(chr))
        printf("palindrome");
    else
        printf("Not palindrome");

    return 0;
}