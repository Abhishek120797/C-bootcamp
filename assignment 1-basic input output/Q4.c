/*WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area
& R with radius.*/

#include <stdio.h>
int main()
{
    double r, a;
    printf("Enter radius of a circle ");
    scanf("%lf", &r);
    a = 3.14 * r * r;
    printf("Area of circle is %.2lf having the radius %.2lf", a, r);
    return 0;
}
