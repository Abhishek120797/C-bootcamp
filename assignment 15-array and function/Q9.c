// Write a function in C to merge two arrays of the same size sorted in descending
// order

#include <stdio.h>
void mergeArrey(int[], int, int[], int);

int main()
{
    int arr1[5] = {165, 155, 145, 135, 125}, arr2[5] = {160, 120, 130, 140, 150};
    mergeArrey(arr1, 5, arr2, 5);
    return 0;
}

void mergeArrey(int num1[], int l1, int num2[], int l2)
{
    int temp[10], i, j, k;
    for (i = 0, j = 0, k = 0; i < l1 && j < l2; k++)
    {
        if (num1[i] > num2[j])
        {
            temp[k] = num1[i];
            i++;
        }
        else
        {
            temp[k] = num2[j];
            j++;
        }
    }

    while (i < l1)
    {
        temp[k] = num1[i];
        i++;
        k++;
    }
    while (j < l2)
    {
        temp[k] = num1[j];
        j++;
        k++;
    }

    for (k = 0; k < l1 + l2; k++)
    {
        printf("%d ", temp[k]);
    }
}
