// Write a program to read and display a 2D array of strings in C language.

#include <stdio.h>
void display_string(char[][20], int);
void read_string(char[][20], int);

int main()
{
    char str[10][20];
    printf("Enter 10 strings: ");
    read_string(str, 10);
    display_string(str, 10);
    return 0;
}

void read_string(char str[][20], int size)
{
    for (int i = 0; i < size; i++)
        fgets(str[i], 20, stdin);
}

void display_string(char str[][20], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%s", str[i]);
    }
}