#include<stdio.h>
int main()
{
    int x,i;
    float a,b,c;
    for(i=1;1;i++)
    {
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exit\n");
    printf("Enter your choice : ");
    scanf("%d",&x);
        switch(x)
        {
        case 1:
        printf("Enter two numbers");
        scanf("%f+%f",&a,&b);
        c=a+b;
        printf("addition of .2%f and .2%f is %.2f\n",a,b,c);
        break;
         case 2:
       printf("Enter two numbers");
        scanf("%f-%f",&a,&b);
        c=a-b;
        printf("Subtraction of .2%f and .2%f is %.2f\n",a,b,c);
        break;
         case 3:
        printf("Enter two numbers");
        scanf("%f*%f",&a,&b);
        c=a*b;
        printf("Multiplication of .2%f and .2%f is %.2f\n",a,b,c);
        break;
         case 4:
        printf("Enter two numbers");
        scanf("%f/%f",&a,&b);
        c=a/b;
        printf(".2%f divide by .2%f is %.2f\n",a,b,c);
        break;
         case 5:
        break;
        default:
        printf("invalid choice\n");
        }
        printf("\n");
        if(x==5)
            break;
    }
return 0;
}
