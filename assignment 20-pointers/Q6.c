#include <stdio.h>
#include <string.h>

int string_length(char *s)
{
    int i;
    for (i = 0; s[i]; i++)
    {
    }
    return i;
}

int main()
{
    char str[100];
    int len;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    len = string_length(str);
    printf("%d", len);
}