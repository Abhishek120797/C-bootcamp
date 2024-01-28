// Write a program in C to Find the Frequency of Characters.

#include <stdio.h>
void frequency(char str[])
{
    int freq[256] = {0};
    for (int i = 0; str[i]; i++)
    {
        freq[str[i]]++;
    }
    for (int j = 0; j <= 255; j++)
    {
        if (freq[j] != 0)
            printf("%c ==> %d\n", j, freq[j]);
    }
}

int main()
{
    char chr[100];
    printf("Enter string: ");
    gets(chr);
    frequency(chr);
    return 0;
}