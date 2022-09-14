#include<stdio.h>
int main()
{
    int num,i,sum,swap,c;
        for(num=1;num<=1000;num++)
        {
        sum=0;
        swap=num;
        while(swap!=0)
        {
            c=swap%10;
            sum=sum+c*c*c;
            swap=swap/10;
        }
        if(num==sum)
            printf("%d\n",num);
        }
    return 0;
}
