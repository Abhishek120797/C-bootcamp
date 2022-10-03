#include<stdio.h>
int main()
{
    float l1,l2,l3;
    printf("Enter length sides of trangle");
    scanf("%f",&l1);
    scanf("%f",&l2);
    scanf("%f",&l3);
    if(l1+l2>l3 && l2+l3>l1 && l1+l3>l2)
        printf("trangle is valid");
    else
        printf("trangle is not valid");
    return 0;
}
