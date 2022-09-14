#include<stdio.h>
int check(int);
int main()
{
    int num;
    printf("Enter a number = ");
    scanf("%d",&num);
    if(check(num))
        printf("%d is even number",num);
    else
        printf("%d is odd number",num);
    return 0;
}
//function
int check(int x)
{
    if(x%2==0)
        return 1;
    else
        return 0;
}
