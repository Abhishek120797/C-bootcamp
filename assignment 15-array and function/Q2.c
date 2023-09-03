#include <stdio.h>
int smallest(int[], int);
int main()
{
    int num[100], length;
    printf("how many number you want to enter: ");
    scanf("%d", &length);

    printf("Enter numbers: ");
    for (int i = 0; i < length; i++)
        scanf("%d", &num[i]);

    printf("smallest number is %d", smallest(num, length));
    return 0;
}

int smallest(int n[], int l)
{
    int temp = n[0];
    for (int i = 1; i < l; i++)
    {
        if (n[i] < temp)
            temp = n[i];
    }
    return temp;
}