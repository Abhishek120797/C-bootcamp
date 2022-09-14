#include <stdio.h>
int main()
{
    double r,a;
    printf("Enter radius of a circle ");
    scanf("%lf",&r);
    a=3.14*r*r;
    printf("Area of circle is %.2lf having the radius %.2lf",a,r);
    return 0;
}
