// Write a C program to sort a string array in ascending order.

#include <stdio.h>

int main()
{
    char str[100], temp;
    int i, j;
    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\n'; i++)
    {
        if (str[i] == '\0')
            break;
    }
    str[i] = '\0';

    for (i = 0; str[i]; i++)
    {
        for (j = i + 1; str[j]; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
        }
    }
    printf("%s", str);
    return 0;
}