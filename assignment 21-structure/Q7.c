struct time
{
    int hrs;
    int min;
    int sec;
};
#include<stdio.h>
int main()
{
    struct time start,end;
    int i;
    printf("Enter start time : \n");
    printf("Enter hours minutes and seconds : ");
    scanf("%d %d %d",&start.hrs,&start.min,&start.sec);
    printf("Enter end time : \n");
    printf("Enter hours minutes and seconds : ");
    scanf("%d %d %d",&end.hrs,&end.min,&end.sec);
    if(end.hrs>=start.hrs)
    {
        while(end.sec<start.sec)
        {
            --start.min;
            start.sec+=60;
        }
        while(end.min<start.min)
        {
            --start.hrs;
            start.min+=60;
        }
    }
    else
        printf("start time not should be greater than end time");
               struct time diff={end.hrs-start.hrs,end.min-start.min,end.sec-start.sec};
    printf("difference beetween two time period is  %d hours %d minutes and %d seconds",diff.hrs,diff.min,diff.sec);
    return 0;
}
