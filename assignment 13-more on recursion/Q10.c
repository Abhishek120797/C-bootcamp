#include <stdio.h>
int power();
int main()
{
    int base,a,result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number : ");	//power should be positive
    scanf("%d", &a);
    result = power(base, a);
    printf("result = %d ", result);
    return 0;
}
//recursive function
int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}
