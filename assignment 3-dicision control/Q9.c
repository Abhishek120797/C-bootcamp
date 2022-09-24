#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter three numbers");
    scanf("%d %d %d",&x,&y,&z);
    if(x>=y&&x>=z)
    {
        printf("%d is greater number",x);
    }
    else
    {
        if(y>=x&&y>=z)
        {
            printf("%d is greater number",y);
        }
        else
        {
            printf("%d is greater nymber",z);
        }
    }
    return 0;
}
