// Write a program in C to copy one string to another string.

#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int i = 0;
    printf("Enter a string: ");
    fgets(str1, 100, stdin);
    for (i = 0; str1[i]; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("%s", str2);
    return 0;
}