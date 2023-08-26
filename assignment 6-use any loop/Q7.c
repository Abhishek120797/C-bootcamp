#include <stdio.h>
int main()
{
    int num, count = 0, temp;
    printf("Enter a number");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    printf("%d", count);
    return 0;
}