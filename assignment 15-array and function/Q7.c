#include <stdio.h>
int occrs(int[], int);
int main()
{
    int num[100], length, result;
    printf("how many number you want to enter: ");
    scanf("%d", &length);

    printf("Enter numbers: ");
    for (int i = 0; i < length; i++)
        scanf("%d", &num[i]);

    result = occrs(num, length);

    if (result)
        printf("%d elements are duplicate", result);
    else
        printf("no elements are duplicate");
    return 0;
}

int occrs(int n[], int l)
{
    int count = 0, temp[100] = {0};

    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (n[i] == n[j])
            {
                temp[n[i]]++;
            }
        }
    }
    for (int i = 0; i < 100; i++)
    {
        if (temp[i] != 0)
            count++;
    }

    return count;
}