#include <stdio.h>
void strev(char str[])
{
    int i, j;
    char temp;

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
}

int main()
{
    char str[100], temp;
    int j, i;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    strev(str);
    printf("%s", str);
    return 0;
}