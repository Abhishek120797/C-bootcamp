#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter value of a=");
    scanf("%d", &a);

    printf("Enter value of b=");
    scanf("%d", &b);

    printf("Enter value of c=");
    scanf("%d", &c);
    d = (b * b) - (4 * a * c);
    if (d == 0)
        printf("Roots are Real and Equal");
    if (d > 0)
        printf("Roots are Real and distinct");
    if (d < 0)
        printf("Roots are imaginary roots");

    return 0;
}