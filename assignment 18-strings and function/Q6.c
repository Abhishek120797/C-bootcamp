#include <stdio.h>

int check_alphnum(char str[])
{
    int flag_num = 0, flag_alpha = 0;
    for (int i = 0; str[i]; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            flag_alpha = 1;
        }
        if (str[i] >= '0' && str[i] <= '9')
        {
            flag_num = 1;
        }
        if (flag_alpha == 1 && flag_num == 1)
        {
            break;
        }
    }
    if (flag_num == 1 && flag_alpha == 1)
        return 1;
    else
        return 0;
}

int main()
{
    char chr[100];
    printf("Enter a string: ");
    fgets(chr, 100, stdin);
    if (check_alphnum(chr))
        printf("Alphanumeric");
    else
        printf("not Alphanumeric");
    return 0;
}
