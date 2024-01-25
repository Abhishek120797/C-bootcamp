// Write a program to check whether a given number is an Armstrong number
//  or not

#include <stdio.h>
int main()
{
    int num, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        int digit;
        digit = temp % 10;
        sum = sum + digit * digit * digit;
        temp = temp / 10;
    }
    if (num == sum)
        printf("armstrong number");
    else
        printf("not a armstrong number");
    return 0;
}