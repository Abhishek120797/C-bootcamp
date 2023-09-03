#include <stdio.h>
#include <string.h>

void check_ip(char ip[][25])
{
    int num, count;
    char *token, temp[25];
    for (int i = 0; i < 4; i++)
    {
        count = 0;
        strcpy(temp, ip[i]);
        token = strtok(temp, ".");
        while (token != NULL)
        {
            num = atoi(token);
            if (num >= 0 && num <= 255)
            {
                token = strtok(NULL, ".");
                count++;
            }
            else
                break;
        }
        if (count == 4)
        {
            printf("%s\n", ip[i]);
        }
    }
}

int main()
{
    char ip[4][25];
    printf("Enter 4 ip adddress: ");
    for (int i = 0; i < 4; i++)
        gets(ip[i]);

    check_ip(ip);
    return 0;
}