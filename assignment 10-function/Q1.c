// Write a function to calculate the area of a circle. (TSRS)

#include <stdio.h>
float area(float);
int main()
{
    float radius;
    printf("Enter redius of circle: ");
    scanf("%f", &radius);
    printf("Area of circle is %.2f", area(radius));
    return 0;
}

float area(float r)
{
    return 3.14 * r * r;
}