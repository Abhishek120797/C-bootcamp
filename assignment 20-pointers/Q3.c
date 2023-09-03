#include <stdio.h>
#include <string.h>

void sort(int *, int);

int main()
{
    int num[10];
    printf("Enter 10 numbers:");
    for (int i = 0; i < 10; i++)
        scanf("%d", &num[i]);

    sort(num, 10);

    for (int i = 0; i < 10; i++)
        printf("%d ", num[i]);
    return 0;
}

void sort(int *n, int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (*(n + i) > *(n + j))
            {
                int temp;
                temp = *(n + i);
                *(n + i) = *(n + j);
                *(n + j) = temp;
            }
        }
    }
}