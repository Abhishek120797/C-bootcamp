// Given a list of words followed by two words, the task is to find the minimum distance
// between the given two words in the list of words.
// (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
//  word1 = “the”, word2 = “fox”, OUTPUT : 1 )

#include <stdio.h>
#include <string.h>

int distance(char str[][25], int l, char w1[], char w2[])
{
    int pos1 = -1, pos2 = -1, min = 10000;
    for (int i = 0; i < l; i++)
    {
        if (strcmp(str[i], w1) == 0)
            pos1 = i;
        if (strcmp(str[i], w2) == 0)
            pos2 = i;
        if (pos1 != -1 && pos2 != -1)
        {
            min = abs(pos2 - pos1);
            return min - 1;
        }
    }
    return -1;
}

int main()
{
    char str[100][25], word1[25], word2[25];
    int d, len;
    printf("how many string you want to enter: ");
    scanf("%d", &len);
    fflush(stdin);
    printf("Enter strings: ");
    for (int i = 0; i < len; i++)
        gets(str[i]);

    printf("Enter first word: ");
    gets(word1);

    printf("Enter second word: ");
    gets(word2);

    d = distance(str, len, word1, word2);
    if (d != -1)
        printf("minimum distance is %d", d);
    else
        printf("string not found");
    return 0;
}