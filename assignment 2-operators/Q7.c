#include <stdio.h>
int main()
{
    int num, result, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        result = num & 1;
        count++;
        if (result == 1)
        {
            printf("%d", count);
            break;
        }
        else
        {
            num = num >> 1;
        }
    }
    return 0;
}