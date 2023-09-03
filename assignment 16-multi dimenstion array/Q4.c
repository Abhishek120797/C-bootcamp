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

int sumofRightDiagonal(int a[][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
                sum = sum + a[i][j];
        }
    }
    return sum;
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
    int m1[3][3], sum;

    inputmatrix(m1);
    sum = sumofRightDiagonal(m1);
    displaymatrix(m1);
    printf("sum of right diagonal of matrix is %d", sum);

    return 0;
}