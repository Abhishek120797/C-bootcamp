// Write a program in C to print or display the lower triangular of a given matrix.

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

void displayLowerTrangularMatrix(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j > i)
                continue;
            else
                printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m[3][3];
    inputmatrix(m);
    displaymatrix(m);
    displayLowerTrangularMatrix(m);
    return 0;
}