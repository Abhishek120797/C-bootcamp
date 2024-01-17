// Write a program to check whether a given character is an alphabet (uppercase), an
//  alphabet (lower case), a digit or a special character

#include <stdio.h>
int main()
{
    char c;
    printf("Enter a any charecter: ");
    scanf("%c", &c);
    if (c >= 48 && c <= 57)
        printf("Digit");
    else if (c >= 65 && c <= 90)
        printf("uppercase alphabet");
    else if (c >= 97 && c <= 122)
        printf("lowercase alphabet");
    else
        printf("special charecter");

    return 0;
}