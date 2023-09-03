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
    int m1[3][3], m2[3][3], multi[3][3];

    inputmatrix(m1);
    inputmatrix(m2);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            multi[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                multi[i][j] = multi[i][j] + m1[i][k] * m2[k][j];
            }
        }
    }

    displaymatrix(multi);

    return 0;
}