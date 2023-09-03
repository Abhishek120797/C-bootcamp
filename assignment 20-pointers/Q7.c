#include <stdio.h>
#include <string.h>
void count_const_vowel(char *s, int *v, int *c)
{
    for (int i = 0; *(s + i); i++)
    {
        if (*(s + i) >= 'a' && *(s + i) <= 'z' || *(s + i) >= 'A' && *(s + i) <= 'Z')
        {
            if (*(s + i) == 'a' || *(s + i) == 'e' || *(s + i) == 'i' || *(s + i) == 'o' || *(s + i) == 'u' ||
                *(s + i) == 'A' || *(s + i) == 'E' || *(s + i) == 'I' || *(s + i) == 'O' || *(s + i) == 'U')
                (*v)++;
            else
                (*c)++;
        }
    }
}

int main()
{
    int vowel = 0;
    int consonent = 0;
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    count_const_vowel(str, &vowel, &consonent);

    printf("vowels ==> %d\nconsonent ==> %d", vowel, consonent);
    return 0;
}
