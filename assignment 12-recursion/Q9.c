#include<stdio.h>
void printbin(int);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printbin(num);
    return 0;
}

//recursive function
void printbin(int n)
{
    int;
    if(n>7)
    {
     printbin(n/8);
    }
    printf("%d",n%8);
}
