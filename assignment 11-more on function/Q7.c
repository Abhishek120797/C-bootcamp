#include <stdio.h>
void print_fib(int);

int main()
{
    int n;
    printf("Enter a term number of febonacci series: ");
    scanf("%d", &n);
    print_fib(n);
    return 0;
}

void print_fib(int n)
{
    int t1 = -1, t2 = 1, tn;
    for (int i = 1; i <= n; i++)
    {
        tn = t1 + t2;
        t1 = t2;
        t2 = tn;
        printf("%d ", tn);
    }
}