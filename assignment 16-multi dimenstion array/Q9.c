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

int check_sparse_matrix(int arr[][3])
{
    int zero = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0)
                zero++;
        }
    }
    if (zero > 9 / 2)
        return 1;
    else
        return 0;
}

int main()
{
    int m[3][3];
    inputmatrix(m);
    displaymatrix(m);
    if (check_sparse_matrix(m))
        printf("sparse matrix");
    else
        printf("not a sparse matrix");
    return 0;
}