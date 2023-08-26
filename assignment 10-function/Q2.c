#include <stdio.h>
float simpleInterest(int, float, int);
int main()
{
    int p, t;
    float i;
    printf("Enter principal amount: ");
    scanf("%d", &p);
    printf("Enter Rate of interest: ");
    scanf("%f", &i);
    printf("Enter time period in year: ");
    scanf("%d", &t);
    printf("Simple interest is %.2f", simpleInterest(p, i, t));
    return 0;
}

float simpleInterest(int p, float i, int t)
{
    return (p * i * t) / 100.0;
}
