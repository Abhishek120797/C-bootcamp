// Write a function to sort an array of any size. (TSRS)

#include <stdio.h>
void sort(int[], int);
int main()
{
    int num[100], length;
    printf("how many number you want to enter: ");
    scanf("%d", &length);

    printf("Enter numbers: ");
    for (int i = 0; i < length; i++)
        scanf("%d", &num[i]);

    sort(num, length);

    for (int i = 0; i < length; i++)
        printf("%d ", num[i]);

    return 0;
}

void sort(int n[], int l)
{
    int temp;
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (n[i] > n[j])
            {
                temp = n[j];
                n[j] = n[i];
                n[i] = temp;
            }
        }
    }
}