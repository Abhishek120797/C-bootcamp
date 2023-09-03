#include <stdio.h>
int main()
{
    int num[10], smallest_1, smallest_2;

    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &num[i]);

    if (num[0] < num[1])
    {
        smallest_1 = num[0];
        smallest_2 = num[1];
    }
    else
    {
        smallest_1 = num[1];
        smallest_2 = num[0];
    }

    for (int i = 2; i < 10; i++)
    {
        if (num[i] < smallest_1)
        {
            smallest_2 = smallest_1;
            smallest_1 = num[i];
        }
        else
        {
            if (num[i] < smallest_2)
                smallest_2 = num[i];
        }
    }
    printf("%d is second smallest", smallest_2);
    return 0;
}