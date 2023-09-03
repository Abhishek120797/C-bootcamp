#include <stdio.h>
#include <string.h>

char user[10][25] = {"abhishek", "aniket", "avinash", "anchal", "sunita"};
int check_user(char str[])
{
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(user[i], str) == 0)
            return 1;
    }
    return 0;
}

int fact()
{
    int num, sum = 1;
    printf("*********calculate factorial**********\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum = sum * i;
    }
    return sum;
}

int main()
{
    char username[25];
    printf("Enter username :");
    gets(username);
    if (check_user(username))
    {
        printf("authentication sucsessfull\n");
        printf("%d", fact());
    }
    else
        printf("username not found");
    return 0;
}