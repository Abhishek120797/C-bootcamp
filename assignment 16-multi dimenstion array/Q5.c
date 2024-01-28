// Write a program in C to find the sum of left diagonals of a matrix.

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

int sumofLeftDiagonal(int a[][3])
{
    int sum = 0;
    int j = 2;
    for (int i = 0; i < 3; i++)
    {
        sum = sum + a[i][j];
        j--;
    }
    return sum;
}

int main()
{
    int m1[3][3], sum;

    inputmatrix(m1);
    sum = sumofLeftDiagonal(m1);
    displaymatrix(m1);
    printf("sum of right diagonal of matrix is %d", sum);

    return 0;
}