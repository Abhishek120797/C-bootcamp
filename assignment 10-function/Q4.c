#include <stdio.h>
void display(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    display(num);
    return 0;
}

void display(int num)
{
    for (int i = 1; i <= num; i++)
        printf("%d ", i);
}