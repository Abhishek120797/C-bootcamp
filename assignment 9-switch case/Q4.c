#include <stdio.h>
int main()
{
    int x, i, a, b, c;
    for (i = 1; 1; i++)
    {
        printf("1.check sides are of isosceles trangle\n");
        printf("2.check sides are of rightangle trangle\n");
        printf("3.check sides are of equilateral trangle\n");
        printf("4.Exit\n");
        printf("Enter your choice ");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("Enter length of sides of trangle");
            scanf("%d %d %d", &a, &b, &c);
            if (a == b && a != c)
                printf("sides are of isosceles trangle\n");
            else if (a == c && a != b)
                printf("sides are of isosceles trangle\n");
            else if (b == c && c != a)
                printf("sides are of isosceles trangle\n");
            else
                printf("sides are of not isosceles trangle\n");
            break;
        case 2:
            printf("Enter length of sides of trangle\nheight=");
            scanf("%d", &a);
            printf("base=");
            scanf("%d", &b);
            printf("hypotenious=");
            scanf("%d", &c);
            if (a * a + b * b == c * c)
                printf("sides are of rightangle trangle\n");
            else
                printf("sides are of not rightangle trangle\n");
            break;

        case 3:
            printf("Enter length of sides of trangle");
            scanf("%d %d %d", &a, &b, &c);
            if (a == b && b == c)
                printf("sides are of equilateral trangle\n");
            else
                printf("sides are of not equilateral trangle\n");
            break;
        case 4:
            break;
        default:
            printf("invalid choice");
        }
        if (x == 4)
            break;
        printf("\n");
    }
    return 0;
}
