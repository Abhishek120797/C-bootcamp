#include <math.h>
#include <stdio.h>

int main()
{
        int a, b, c, D, root1, root2;
        printf("Enter value of a,b,c:\n");
        printf("a=");
        scanf("%d", &a);
        printf("b=");
        scanf("%d", &b);
        printf("c=");
        scanf("%d", &c);
        D = b * b - 4 * a * c;
        switch (D > 0)
        {
        case 1:
                root1 = (-b + sqrt(D)) / (2 * a);
                root2 = (-b - sqrt(D)) / (2 * a);
                printf("roots of quadratic equation real and distinct %.2f and %.2f", root1, root2);
                break;
        case 0:
                switch (D < 0)
                {
                case 1:
                        root1 = (-b + sqrt(D)) / (2 * a);
                        root2 = (-b - sqrt(D)) / (2 * a);
                        printf("roots of quadratic equation is imaginary %2.fi and %.2fi,root1,root2");
                        break;
                case 0:
                        root1 = root2 = -b / (2 * a);
                        printf("both roots of quadratic equation is %2.f", root1);
                        break;
                }
                break;
        }
        return 0;
}