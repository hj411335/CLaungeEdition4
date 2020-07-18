/* prog11_7, 結構陣列的使用 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 5
#define LENGTH 10

// *char getStudentName(void) {
//     for(int i=0;i<LENGTH;i++)
//     {
//         if()
//     } 
// }

struct data /* 定義結構data */
{
    char name[10];
    int math;
} student[MAX]; /* 宣告結構陣列student */

char NAMELIST[MAX][LENGTH] = {"Jay", "Jim", "Kelly", "Ray", "Sean"};
int MATHLIST[MAX] = {55, 50, 60, 70, 80};

struct data best (struct data student[])
{
    int best_idx = 0;
    for(int i = 0; i<MAX;i++)
    {
        if(student[i].math > student[best_idx].math)
            best_idx = i;
    }
    return student[best_idx];
}

void sort (struct data student[])
{
    char nameTemp[LENGTH] = "NA";
    printf("before\n");
    for(int i=0;i<MAX;i++)					/* 輸出結構陣列的內容 */
        printf("%s的數學成績=%d\n",student[i].name,student[i].math);
    int sort_idx = 0;

    for(int cmp_times=MAX-1;cmp_times>0;cmp_times--)
    {
        for(int i=0;i<cmp_times;i++)
            if(student[i].math < student[i+1].math)
            {
                int mathTemp = student[i].math;
                student[i].math = student[i+1].math;
                student[i+1].math = mathTemp;

                // char nameTemp[LENGTH] = student[i].name;
                strcpy(nameTemp,student[i].name);
                strcpy(student[i].name, student[i+1].name);
                strcpy(student[i+1].name, nameTemp);

            }
        // debugging
        // printf("after\n");
        // for (int i = 0; i < MAX; i++) /* 輸出結構陣列的內容 */
        //     printf("%s的數學成績=%d\n", student[i].name, student[i].math);

    }

    printf("after\n");
    for(int i=0;i<MAX;i++)					/* 輸出結構陣列的內容 */
        printf("%s的數學成績=%d\n",student[i].name,student[i].math);
}

int main(void)
{
   for(int i=0;i<MAX;i++)	 
   {
       strcpy(student[i].name,NAMELIST[i]);
       student[i].math = MATHLIST[i];
   }

    // printf("best student is %s, score is %d\n",best(student).name, best(student).math);

    sort(student);


   

   system("pause");
   return 0;
}

