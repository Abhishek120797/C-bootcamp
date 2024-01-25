// Write a function in C to count the frequency of each element of an array.

#include <stdio.h>
void frequency_count(int[], int);
int main()
{
    int num[100], len;

    printf("how many number you want to enter: ");
    scanf("%d", &len);

    for (int i = 0; i < len; i++)
        scanf("%d", &num[i]);

    frequency_count(num, len);

    return 0;
}

void frequency_count(int n[], int l)
{
    int temp[100] = {0};
    for (int i = 0; i < l; i++)
    {
        temp[n[i]]++;
    }

    for (int j = 0; j < 100; j++)
    {
        if (temp[j] != 0)
            printf("%d = %d\n", j, temp[j]);
    }
}