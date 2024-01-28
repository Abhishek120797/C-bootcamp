// Write a program in C to find the row with maximum number of 1s.

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

void row_Maxium_contain_1(int m[][3])
{
    int count[3], row_no;
    for (int i = 0; i < 3; i++)
    {
        count[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            if (m[i][j] == 1)
            {
                count[i]++;
            }
        }
    }
    int temp = count[0];
    row_no = 0;
    for (int i = 1; i < 3; i++)
    {
        if (count[i] > temp)
        {
            temp = count[i];
            row_no = i;
        }
    }
    printf("row %d has maximum 1s", row_no + 1);
}

int main()
{
    int m[3][3];
    inputmatrix(m);
    displaymatrix(m);
    row_Maxium_contain_1(m);
    return 0;
}