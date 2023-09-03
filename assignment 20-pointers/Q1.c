#include <stdio.h>
void swap(int *, int *);
int main()
{
    int a, b;
    printf("Enter two number: \n");
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    swap(&a, &b);
    printf("a=%d\nb=%d", a, b);
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}