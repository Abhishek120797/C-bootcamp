// Write a program to count the occurrence of a given character in a given string.

#include <stdio.h>

int main()
{
    char str[100], c;
    int count = 0;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    printf("Enter charecter : ");
    scanf("%c", &c);
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == c)
            count++;
    }
    printf("occurance of %c is %d times", c, count);

    return 0;
}