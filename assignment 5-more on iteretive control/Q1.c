// Write a program to print MySirG N times on the screen

#include <stdio.h>
int main()
{
    int times;
    printf("Enter a nunmber:");
    scanf("%d", &times);
    for (int i = 0; i < times; i++)
        printf("MySirG\n");
    return 0;
}