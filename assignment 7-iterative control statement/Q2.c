#include <stdio.h>
int main()
{
    int n, t1 = -1, t2 = 1, tn;
    printf("Enter a term number of febonacci series: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        tn = t1 + t2;
        t1 = t2;
        t2 = tn;
        printf("%d ", tn);
    }
    return 0;
}