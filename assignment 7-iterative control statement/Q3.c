// Write a program to check whether a given number is there in the Fibonacci
//  series or not.

#include <stdio.h>
int main()
{
    int n, t1 = -1, t2 = 1, tn = 0;
    printf("Enter a term of febonacci series: ");
    scanf("%d", &n);
    while (tn <= n)
    {
        tn = t1 + t2;
        t1 = t2;
        t2 = tn;
        if (tn == n)
        {
            printf("%d is term of febonacci series", n);
            break;
        }
    }
    if (tn > n)
    {
        printf("%d is not a term of febonacci series", n);
    }
    return 0;
}