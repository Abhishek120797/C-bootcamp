#include <stdio.h>
void add();
void sub();
void multi();
void division();

int main()
{
    int option;
    while (1)
    {
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        printf("select operetion by entering their serial number: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            multi();
            break;
        case 4:
            division();
            break;
        case 5:
            break;
        default:
            option = 0;
            break;
        }
        if (option == 0 || option == 5)
            break;
    }
    return 0;
}

void add()
{
    float num1, num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
    printf("\n");
}

void sub()
{
    float num1, num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
    printf("\n");
}

void multi()
{
    float num1, num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
    printf("\n");
}

void division()
{
    float dividend, divisor;
    printf("Enter dividend: ");
    scanf("%f", &dividend);
    printf("Enetr divisor: ");
    scanf("%f", &divisor);
    printf("%.2f / %.2f = %.2f", dividend, divisor, dividend / divisor);
    printf("\n");
}