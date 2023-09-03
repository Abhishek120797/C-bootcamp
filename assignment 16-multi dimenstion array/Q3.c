#include <stdio.h>

void inputmatrix(int arr[][3])
{
    printf("Enter matrix element: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", &arr[i][j]);
    }
}

void displaymatrix(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("[ ");
        for (int j = 0; j < 3; j++)
            printf("%d ", arr[i][j]);
        printf(" ]");
        printf("\n");
    }
}

int main()
{
    int m1[3][3], t[3][3];

    inputmatrix(m1);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            t[i][j] = m1[j][i];
        }
    }

    displaymatrix(t);

    return 0;
}