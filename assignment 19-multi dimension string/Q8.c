#include<stdio.h>
#include<string.h>
int main()
{
    char s[5][6]={"the","quick","brown","fox","quick"},word_1[10],word_2[10];
    int i,i1=-1,i2=-1,min=1000;
    printf("Enter first word : ");
    gets(word_1);
    printf("Enter second word : ");
    gets(word_2);
    for(i=0;i<5;i++)
    {
        if(strcmp(s[i],word_1)==0)
            i1=i;
        if(strcmp(s[i],word_2)==0)
            i2=i;
        if(i1!=-1 && i2!=-1)
            min=abs(i2-i1);
    }
    if(min==1000)
        printf("words not found in list");
    else
        printf("distance beetween %s and %s is %d",word_1,word_2,min-1);
    return 0;
}
