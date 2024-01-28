// Write a program to calculate the difference between two time periods.

#include <stdio.h>

struct Time
{
    int h;
    int m;
    int s;
};

struct Time timeDifference(struct Time *, struct Time *);
void getTime(struct Time *);
void displayTime(struct Time);

int main()
{
    struct Time start, end, diff_t;

    printf("Enter the start time period:\n");
    getTime(&start);

    printf("Enter the end time period:\n");
    getTime(&end);

    displayTime(start);
    displayTime(end);

    diff_t = timeDifference(&start, &end);

    printf("\n----Time period deference----\n");
    displayTime(diff_t);

    return 0;
}

void getTime(struct Time *t)
{
    printf("Enter Time hh:mm:ss : ");
    scanf("%d:%d:%d", &(t->h), &(t->m), &(t->s));
}

void displayTime(struct Time time)
{
    printf("%d : %d : %d\n", time.h, time.m, time.s);
}

struct Time timeDifference(struct Time *start_time, struct Time *end_time)
{
    struct Time temp;
    int start_time_s = start_time->h * 3600 + start_time->m * 60 + start_time->s;
    int end_time_s = end_time->h * 3600 + end_time->m * 60 + end_time->s;
    int total_second = end_time_s - start_time_s;
    if (total_second < 0)
    {
        total_second += 24 * 3600;
    }
    temp.h = total_second / 3600;
    temp.m = (total_second % 3600) / 60;
    temp.s = total_second % 60;
    return temp;
}
