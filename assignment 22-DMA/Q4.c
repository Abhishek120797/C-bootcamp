// Write a program to input and print text using dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *text = NULL, c;
    int i = 0, j = 1;

    printf("Enter text: ");
    text = (char *)malloc(sizeof(char));
    while (c != '\n')
    {
        c = getc(stdin);
        j++;
        text = (char *)realloc(text, j * sizeof(char));
        text[i] = c;
        i++;
    }
    text[i] = '\0';

    printf("\nEntered text ==> %s", text);
    free(text);
    return 0;
}