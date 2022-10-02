#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a ,b;
    printf("Enter value of a = ");
    scanf("%d",&a);
    printf("Enter value of b = ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("After swapping a=%d and b=%d",a,b);
    return 0;
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
