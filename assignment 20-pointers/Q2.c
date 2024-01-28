// Write a function to swap strings of two char arrays of calling functions. (TSRS)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// void swap(char *a, char *b,int max_len)
// {
//     char *temp=(char*)malloc(sizeof(char)*max_len);
//     strcpy(temp, a);
//     strcpy(a, b);
//     strcpy(b, temp);
// }

void swap(char **a, char **b)
{
    char *temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    char *str1 = NULL;
    char *str2 = NULL;
    char buffer[100];

    printf("Enter fist string: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';

    str1 = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
    strcpy(str1, buffer);

    printf("Enter second string: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';

    str2 = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
    strcpy(str2, buffer);

    printf("before swapping\n");
    printf("string 1 ==> %s\nstring 2 ==> %s\n", str1, str2);

    swap(&str1, &str2);

    printf("after swapping\n");
    printf("string 1 ==> %s\nstring 2 ==> %s\n", str1, str2);

    free(str1);
    free(str2);
    return 0;
}
