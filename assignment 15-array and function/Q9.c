#include<stdio.h>
void sortmerge();//function decleration
int main()
{
    int a[]={19,18,17,15,12},b[]={16,14,13,11,10};
    sortmerge(a,b);  //function call
    return 0;
}

//function define
void sortmerge(int x[],int y[])
{
int i=0,j=0,k,z[10];
for(k=0;k<10;k++)
{
    if(j>=5)
    {
        while(k<10)
        {
            z[k]=x[i];
            i++;
            k++;
            if(k==10)
                break;
        }
    }
    else
        if(i>=5)
        {
            while(k<10)
            {
                z[k]=y[j];
                j++;
                k++;
                if(k==0)
                    break;
            }
        }
        if(x[i] > y[j])
        {
            z[k]=x[i];
            i++;
        }
        else
        {
            z[k]=y[j];
            j++;
        }
}
for(k=0;k<10;k++)
    printf("%d ",z[k]);
}
