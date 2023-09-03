#include <stdio.h>
#include <string.h>

void revers_string(char str[], int l)
{
    char temp;
    for (int i = 0; i < l; i++, l--)
    {
        temp = str[i];
        str[i] = str[l];
        str[l] = temp;
    }
}

void reverse_string_words(char str[])
{
    int start = 0, end = 0, i;
    for (i = 0; str[i]; i++)
    {
        if (str[i] == ' ')
        {
            end = i - 1;
            while (start < end)
            {
                char temp;
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
    end = i - 1;
    while (start < end)
    {
        char temp;
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    revers_string(str, i - 1);
}

int main()
{
    char str[100];
    printf("Enter a string : ");
    gets(str);
    reverse_string_words(str);
    printf("%s", str);
    return 0;
}