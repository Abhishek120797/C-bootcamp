// Write a program in C to count the total number of alphabets, digits and special
// characters in a string.

#include <stdio.h>

int main()
{
    char str[100];
    int i, d_count = 0, s_count = -1, a_count = 0;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    for (i = 0; str[i]; i++)
    {
        if (((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >= 'A') && (str[i] <= 'Z')))
            a_count++;
        else if (str[i] >= '0' && str[i] <= '9')
            d_count++;
        else
            s_count++;
    }
    printf("Digit=%d\n Alphabet=%d\n special=%d", d_count, a_count, s_count);
    return 0;
}