#include<stdio.h>
#include<string.h>
int main()
{
    char a[5][30]={"abhi.jais1211@gmail.com","vicky.jais1211@gmail.com","rkj7215@gmail.com","sangeetagmail.com","rakeshgmail.com"};
    int i;
    for(i=0;i<5;i++)
    {
        if(strchr(a[i],'@')!=0)
            printf("%s\n",a[i]);
    }
    return 0;
}
