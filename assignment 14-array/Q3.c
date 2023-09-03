#include <stdio.h>
int main()
{
    int num[10], sumEven = 0, sumOdd = 0;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0)
            sumEven = sumEven + num[i];
        else
            sumOdd = sumOdd + num[i];
    }
    printf("sum of Even %d", sumEven);
    printf("sum of odd numbers is %d", sumOdd);
    return 0;
}