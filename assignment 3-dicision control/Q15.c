int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x==0)
        printf("number is zero");
    if(x<0)
        printf("number is negative");
    if(x>0)
        printf("number is positive");
    return 0;
}
