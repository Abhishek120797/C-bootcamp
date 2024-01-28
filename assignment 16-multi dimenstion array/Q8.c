// Write a program in C to print or display an upper triangular matrix

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

void displayUpperTrangularMatrix(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j >= i)
                printf("%d ", arr[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main()
{
    int m[3][3];
    inputmatrix(m);
    displaymatrix(m);
    displayUpperTrangularMatrix(m);
    return 0;
}