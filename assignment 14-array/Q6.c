#include <stdio.h>
int main()
{
    int num[10], temp;
    printf("Enter 10 numbers: ");

    for (int i = 0; i < 10; i++)
        scanf("%d", &num[i]);

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
        printf("%d ", num[i]);
    return 0;
}