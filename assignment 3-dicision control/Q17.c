#include <stdio.h>
int main()
{
    float s1, s2, s3;
    printf("Enter sides of trangle: ");
    scanf("%f %f %f", &s1, &s2, &s3);
    if (s1 + s2 > s3 && s2 + s3 > s1 && s1 + s3 > s2)
        printf("valid trangle");
    else
        printf("Invalid trangle");

    return 0;
}