#include <stdio.h>

int strlen(char str[])
{
    int i;
    for (i = 0; str[i]; i++)
    {
    }
    return i - 1;
}

int main()
{
    char chr[100];
    printf("Enter a string: ");
    fgets(chr, 100, stdin);
    printf("length of string is %d", strlen(chr));
    return 0;
}
