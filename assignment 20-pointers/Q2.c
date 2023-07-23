swap(char **x,char **y)
{
    char *temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    char a[25],b[25];
    printf("Enter two string : ");
    gets(a);
    gets(b);
    swap(&a,&b);
    printf("%s\n%s",a,b);
    return ;
}