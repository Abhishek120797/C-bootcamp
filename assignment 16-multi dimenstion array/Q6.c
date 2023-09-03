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
    int m[3][3], row, col;
    inputmatrix(m);
    displaymatrix(m);
    for (int i = 0; i < 3; i++)
    {
        row = 0;
        col = 0;
        for (int j = 0; j < 3; j++)
        {
            row = row + m[i][j];
            col = col + m[j][i];
        }
        printf("row[%d]=", i + 1);
        printf("%d ", row);
        printf("col[%d]=", i + 1);
        printf("%d ", col);
    }
    return 0;
}
