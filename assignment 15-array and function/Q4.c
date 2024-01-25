// Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

#include <stdio.h>
void rotate(int[], int);

int main()
{
    int num[100], len;

    printf("Enter how many number you want to enter: ");
    scanf("%d", &len);

    printf("Enter numbers: ");
    for (int i = 0; i < len; i++)
        scanf("%d", &num[i]);

    rotate(num, len);

    for (int i = 0; i < len; i++)
        printf("%d ", num[i]);

    return 0;
}

void rotate(int num[], int l)
{
    int n, d, temp;

    printf("Enter no of position you want to rotate: ");
    scanf("%d", &n);
    printf("Enter 1 of right direction rotation and 0 for left :");
    scanf("%d", &d);

    if (d)
    {
        for (int i = n; i > 0; i--)
        {
            temp = num[0];
            for (int j = 0; j < l - 1; j++)
            {
                num[j] = num[j + 1];
            }
            num[l - 1] = temp;
        }
    }
    else
    {
        for (int i = n; i > 0; i--)
        {
            temp = num[l - 1];
            for (int j = l - 1; j > 0; j--)
            {
                num[j] = num[j - 1];
            }
            num[0] = temp;
        }
    }
}