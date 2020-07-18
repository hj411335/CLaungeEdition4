#include <stdio.h>
#include <stdlib.h>



struct date
{
    int year;
    int month;
    int day;
    struct 
    {
        int hour;
        int minutes;
        double second;
    }time;
};

struct date now = {2020,6,29,{10,38,30.29}};

int main(void)
{     


    printf("now1 %2d-%2d-%4d\n", now.month, now.day, now.year);
    printf("now2 %2d-%2d-%2.2f\n", now.time.hour, now.time.minutes, now.time.second);

    printf("size of now: %d\n", sizeof(now));

    system("pause");
    return 0;
}

