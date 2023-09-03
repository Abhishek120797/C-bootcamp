#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *name, c;
    int i = 0, j = 1;

    name = (char *)malloc(sizeof(char));

    printf("Enter string: ");
    while (c != '\n')
    {
        c = getc(stdin);
        j++;
        name = (char *)realloc(name, j * sizeof(char));
        name[i] = c;
        i++;
    }
    name[i] = '\0';

    printf("%s %d", name, strlen(name));
    free(name);
    return 0;
}