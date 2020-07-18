#include <stdio.h>
#include <stdlib.h>

struct date {
    int year;
    int month;
    int day;
};

struct date holiday = {2004, 4, 26};
struct date festival;

int main(void)
{     
    printf("請輸入festival年份 ,例如:2000-10-10\n");
    scanf("%d-%d-%d",&festival.year, &festival.month, &festival.day);

    printf("holiday %2d-%2d-%4d\n", holiday.month, holiday.day, holiday.year);
    printf("festival %2d-%2d-%4d\n", festival.month, festival.day, festival.year);

    printf("size of holiday: %d\n", sizeof(holiday));

    system("pause");
    return 0;
}

