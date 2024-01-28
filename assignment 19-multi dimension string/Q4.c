// Write a program to search a string in the list of strings.

#include <stdio.h>
#include <string.h>

int search_string(char str[][20], char search[])
{
    for (int i = 0; i <= 10; i++)
    {
        if (strcmp(search, str[i]) == 0)
            ;
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char list[][20] = {"mumbai", "pune", "patna", "indore", "jaipur",
                       "kanpur", "bhopal", "aagra", "jaunpur", "madras"};

    char search[20];
    printf("Enter string witch want to string: ");
    fgets(search, 20, stdin);

    if (search_string(list, search))
        printf("string found");
    else
        printf("string not found");

    return 0;
}