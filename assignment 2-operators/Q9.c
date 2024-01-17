// Write a program to print size of an int, a float, a char and a double type variable

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