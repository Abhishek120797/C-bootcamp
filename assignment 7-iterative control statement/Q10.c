// Write a program to print all Armstrong numbers under 1000

#include <stdio.h>
int main()
{
    int temp, sum;
    for (int num = 0; num <= 1000; num++)
    {
        temp = num;
        sum = 0;
        while (temp != 0)
        {
            int digit;
            digit = temp % 10;
            sum = sum + digit * digit * digit;
            temp = temp / 10;
        }
        if (num == sum)
            printf("%d ", num);
    }

    return 0;
}