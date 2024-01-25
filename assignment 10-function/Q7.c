// Write a function to calculate the number of combinations one can make from n items
//  and r selected at a time. (TSRS)

#include <stdio.h>

int fact(int);
int permutation(int, int);
int combination(int, int);

int main()
{
    int result, n, r;
    printf("Enter value of n:");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);
    result = combination(n, r);
    printf("%d", result);
    return 0;
}

int fact(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int permutation(int n, int r)
{
    return fact(n) / fact(n - r);
}

int combination(int n, int r)
{
    return permutation(n, r) / fact(r);
}
