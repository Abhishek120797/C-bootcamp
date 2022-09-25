#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],letter[2];
    int i,count=0;
    printf("Enter your name : ");
    fgets(str,50,stdin);
    printf("Enter a one charecter : ");
    fgets(letter,2,stdin);
    for(i=0;str[i];i++)
    {
        if(letter[0]==str[i])
            count++;
    }
    printf("%s is accured in %d times in your name",letter,count);
    return 0;
}
