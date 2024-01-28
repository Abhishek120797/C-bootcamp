// Write a function to count words in a given string

#include <stdio.h>
int count_word(char str[])
{
    int count = 1;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
            count++;
    }
    return count;
}
int main()
{
    char chr[1000];
    printf("Enter a string: ");
    fgets(chr, 1000, stdin);
    printf("%d words in %s", count_word(chr), chr);
    return 0;
}