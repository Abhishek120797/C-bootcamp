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
    if(n>1)
    {
     printbin(n/2);
    }
    printf("%d",n%2);
}
