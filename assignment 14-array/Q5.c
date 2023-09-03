#include <stdio.h>
int main()
{
    int num[10], temp;
    printf("Enter 10 numbers: ");

    for (int i = 0; i < 10; i++)
        scanf("%d", &num[i]);
    temp = num[0];
    for (int i = 0; i < 10; i++)
    {
        if (num[i] < temp)
        {
            temp = num[i];
        }
    }
    printf("%d is smallest among these numbers", temp);
    return 0;
}