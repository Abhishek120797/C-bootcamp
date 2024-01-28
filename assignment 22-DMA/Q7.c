// Write a program to demonstrate memory leak in C.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;
    ptr = (int *)malloc(sizeof(int)); // memory leak
    ptr = NULL;
    return 0;
}