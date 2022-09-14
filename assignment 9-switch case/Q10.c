#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2,dis;
    printf("Enter coeficient of x^2 and x and constant term\nx^2=");
    scanf("%f",&a);
    printf("x=");
    scanf("%f",&b);
    printf("constant=");
    scanf("%f",&c);
    dis=b*b-4*a*c;
    switch(dis>0)
    {
    case 1: root1=(-b+sqrt(dis))/(2*a);//roots are real and distinct
            root2=(-b-sqrt(dis))/(2*a);
            printf("roots of quadratic equation is real and distinct %.2f and %.2f",root1,root2);
            break;
    case 0: switch(dis<0)//both roots are imaginary
            {
            case 1: root1=(-b+sqrt(4*a*c-b*b))/(2*a);
                    root2=(-b-sqrt(4*a*c-b*b))/(2*a);
                   printf("roots of quadratic equation is imaginary %.2fi and %.2fi",root1,root2);
                   break;
            case 0:root1=root2=-b/(2*a);//booth roots are equal
                   printf("both roots of quadratic equation is equal %.2f",root1);
                   break;
            }
    }
    return 0;
}
