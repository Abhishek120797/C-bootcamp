// #include<stdio.h>
// int main()
// {
//     int num[10],temp;
//     printf("Enter 10 numbers: ");

//     for(int i=0;i<10;i++)
//         scanf("%d",&num[i]);

//     for(int i=0;i<10;i++)
//     {
//         for(int j=i+1;j<10;j++)
//         {
//             if(num[j]>num[i])
//             {
//                 temp=num[i];
//                 num[i]=num[j];
//                 num[j]=temp;
//             }
//         }

//     }
//     printf("%d ",num[1]);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int num[10], greatest_1, greatest_2 = 0;
    printf("Enter 10 numbers: ");

    for (int i = 0; i < 10; i++)
        scanf("%d", &num[i]);

    greatest_1 = num[0];
    for (int i = 1; i < 10; i++)
    {
        if (num[i] > greatest_1)
        {
            greatest_2 = greatest_1;
            greatest_1 = num[i];
        }
        else
        {
            if (num[i] > greatest_2)
                greatest_2 = num[i];
        }
    }
    printf("%d is second greatest", greatest_2);
    return 0;
}