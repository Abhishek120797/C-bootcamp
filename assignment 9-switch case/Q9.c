// Program to Convert even number into its upper nearest odd number
// Switch Statement

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch (num % 2 == 0)
    {
    case 1:
        printf("%d", num + 1);
        break;
    case 0:
        printf("%d", num);
        break;
    }
    return 0;
}