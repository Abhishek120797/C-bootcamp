#include <stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    printf("Enter marks of 5 subject\n");
    printf("subject 1 =");
    scanf("%d",&sub1);
    printf("subject 2 =");
    scanf("%d",&sub2);
    printf("subject 3 =");
    scanf("%d",&sub3);
    printf("subject 4 =");
    scanf("%d",&sub4);
    printf("subject 5 =");
    scanf("%d",&sub5);
    if((sub1>=33&&sub2>=33)&&(sub3>=33&&sub4>=33)&&sub5>=33)
        printf("candidate is passed");
    else
        printf("candidate is failed");
    return 0;
}
