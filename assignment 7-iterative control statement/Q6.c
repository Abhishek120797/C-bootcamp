#include <stdio.h>
int main()
{
    for (int num = 0; num <= 100; num++)
    {
        for (int i = num - 1; i > 0; i--)
        {
            if (num % i == 0)
            {
                if (i > 1)
                    break;
                else
                    printf("%d ", num);
            }
        }
    }
    return 0;
}