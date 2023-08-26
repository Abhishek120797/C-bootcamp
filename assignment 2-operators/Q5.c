#include <stdio.h>
int main()
{
    int num, sum = 0, temp;
    printf("Enter three digit number: ");
    scanf("%d", &num);
    temp = num;
    for (int i = 0; i < 3; i++)
    {
        sum = sum + temp % 10;
        temp = temp / 10;
    }
    printf("Sum of digit of %d is %d", num, sum);
    return 0;
}