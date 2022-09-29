#include<stdio.h>
#include<string.h>
int main()
{
    char a[5][30];
    int i,j,vowels;
    printf("Enter a string : ");
    for(i=0;i<5;i++)
        gets(a[i]);
    for(i=0;i<5;i++)
    {
        vowels=0;
        for(j=0;a[i][j];j++)
        {
            if(a[i][j]=='a'||a[i][j]=='e'||a[i][j]=='i'||a[i][j]=='o'||a[i][j]=='u')
                vowels++;
        }
        printf("%s has %d vowels\n",a[i],vowels);
    }
    return 0;
}
