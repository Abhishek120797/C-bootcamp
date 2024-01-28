// Write a program to reverse a string.

#include <stdio.h>
int main()
{
    char str[100], temp;
    int j, i;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    for (j = 0; str[j]; j++)
    {
    }
    j = j - 2;
    for (i = 0; i <= j; i++)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }
    printf("%s", str);
    return 0;
}