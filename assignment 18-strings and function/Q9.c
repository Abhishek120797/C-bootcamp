#include<stdio.h>
#include<string.h>
void swap();
int main()
{
    int i=0,start=0,end=0,flag=0;
    char a[100];
    printf("Enter a string : ");
    fgets(a,100,stdin);
    while(a[i]!='\0')
    {
        while(a[i]!=' ')
        {
            if(a[i]=='\0')
            {
                flag=1;
                break;
            }
            end++;
            i++;
        }
        swap(a,start,end-1);
        if(flag==1)
            break;
        start=++end;
        i++;
    }
    swap(a,0,i-1);
    printf("%s",a);
    return 0;
}
void swap(char str[],int i,int j)
{
    char temp;
    while(i<=j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
}
