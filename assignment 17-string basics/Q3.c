// Write a program to count vowels in a given string

#include <stdio.h>

int main()
{
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count++;
    }
    printf("%d vowels", count);

    return 0;
}