#include <stdio.h>
int main()
{
    int i;
    char c;
    float f;
    double d;
    printf("%d,%d,%d,%d", sizeof(i), sizeof(c), sizeof(f), sizeof(d));
    return 0;
}