#include <stdio.h>
int main()
{
    char x;
    printf("Enter any alphabet: ");
    scanf("%c", &x);
    if ((x >= 'a') && (x <= 'z'))
        printf("Alphabet is lowercase");
    else if ((x >= 'A') && (x <= 'Z'))
        printf("Alphabet is Uppercase");
    else
        printf("not a alphabet");
    return 0;
}