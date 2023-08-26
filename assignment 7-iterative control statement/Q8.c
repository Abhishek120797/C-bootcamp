#include <stdio.h>
int main()
{
    int num1, flag = 0;
    printf("Enter a numbers: ");
    scanf("%d", &num1);
    for (int num = num1 + 1; 1; num++)
    {
        for (int i = num / 2; i > 0; i--)
        {
            if (num % i == 0)
            {
                if (i > 1)
                    break;
                else
                    flag = 1;
            }
        }
        if (flag == 1)
        {
            printf("%d", num);
            break;
        }
    }
    return 0;
}