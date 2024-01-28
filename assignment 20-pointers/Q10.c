// Write a program to print a string in reverse using a pointer

#include <stdio.h>
#include <string.h>

void print_reverse(char *s)
{
    int l = strlen(s);

    for (l = l - 1; l >= 0; l--)
        printf("%c", *(s + l));
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    print_reverse(str);

    return 0;
}