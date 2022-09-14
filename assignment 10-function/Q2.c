#include<stdio.h>
float simpleI(float,float,float);
int main()
{
    float p,t,r,SI;
    printf("Enter principal amount= ");
    scanf("%f",&p);
    printf("Enter time duration in years= ");
    scanf("%f",&t);
    printf("Enter rate of interest= ");
    scanf("%f",&r);
    SI=simpleI(p,t,r);
    printf("simple interest= %.2f",SI);
    return 0;
}
//function
float simpleI(float p,float t,float r)
{
    float si;
    si=(p*t*r)/100.0;
    return si;
}
