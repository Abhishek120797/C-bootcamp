#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Unit digit is %d", num % 10);
    return 0;
}
