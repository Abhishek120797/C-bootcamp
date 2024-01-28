// Write a function to compare two strings

#include <stdio.h>
int strcmp(char str1[], char str2[])
{
    for (int i = 0; str1[i] && str2[i]; i++)
    {
        if (str1[i] - str2[i] > 0)
            return 1;
        else if (str1[i] - str2[i] < 0)
            return -1;
        else
            continue;
    }
    return 0;
}

int main()
{
    char chr1[100], chr2[100];
    int r;
    printf("Enter a first string:");
    fgets(chr1, 100, stdin);
    printf("Enter a second string:");
    fgets(chr2, 100, stdin);
    r = strcmp(chr1, chr2);
    if (r > 0)
        printf("%s is greater", chr1);
    else
    {
        if (r < 0)
            printf("%s is greater", chr2);
        else
            printf("Equal");
    }
    return 0;
}