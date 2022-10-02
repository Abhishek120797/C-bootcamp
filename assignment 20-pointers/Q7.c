#include<stdio.h>
int main()
{
    char str[100],*ptr;
    int i,vol=0,cons=0;
    printf("Enter a string : ");
    gets(str);
    ptr=&str;
    for(i=0;*(ptr+i);i++)
    {
        if((*(ptr+i)=='a')|| (*(ptr+i)=='e')|| (*(ptr+i)=='i')|| (*(ptr+i)=='o')|| (*(ptr+i)=='u'))
            vol++;
        else
        {
            if((*(ptr+i)>='a') && (*(ptr+i)<='z') || (*(ptr+i)>='A') && (*(ptr+i)>='Z'))
                cons++;
        }
    }
    printf("number of vowels = %d and conconent= %d",vol,cons);

    return 0;
}

