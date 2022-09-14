#include<stdio.h>
float area(float);
int main()
{
    float r,A;
    printf("Enter radius of circle ");
    scanf("%f",&r);
    A=area(r);
    printf("Area of circle is %.2f",A);
    return 0;
}
//function
float area(float x)
{
    float Area;
    Area=3.14*x*x;
    return Area;
}
