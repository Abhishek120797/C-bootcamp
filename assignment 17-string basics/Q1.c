// Write a program to calculate the length of the string. (without using built-in method)

#include <stdio.h>

int main()
{
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    for (int i = 0; str[i]; i++)
        count++;
    printf("length of string is %d", count);
    return 0;
}