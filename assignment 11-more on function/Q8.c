#include <stdio.h>

int fact(int);
int permutation(int, int);
int combination(int, int);
void print_pascal(int);

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    print_pascal(num);
    return 0;
}

void print_pascal(int line)
{
    int i, j, k, r;
    for (i = 0; i < line; i++)
    {
        k = 1;
        r = 0;
        for (j = 0; j <= (line * 2 - 1); j++)
        {
            if (j >= line - i && j <= line + i && k)
            {
                printf("%2d", combination(i, r));
                k = 0;
                r++;
            }
            else
            {
                printf(" ");
                k = 1;
            }
        }
        printf("\n");
    }
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