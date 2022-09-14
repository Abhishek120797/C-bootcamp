#include<stdio.h>
void printreverse(int);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printreverse(num);
    return 0;
}

//recursive function
void printreverse(int n)
{
    if(n>0)
    printf("%d",n%10);
    printreverse(n/10);
}
