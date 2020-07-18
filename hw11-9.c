#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct data
{
    char name[10];
    int math;
} student[5];

int highest_idx = 0;

int main(void)
{     

    strcpy(student[0].name, "name1");
    student->math = 99;

    strcpy(student[0].name, "name1");
    student[0].math = 65;

    strcpy(student[1].name, "name2");
    student[1].math = 70;
    
    strcpy(student[2].name, "name3");
    student[2].math = 90;
    
    strcpy(student[3].name, "name4");
    student[3].math = 66;
    
    strcpy(student[4].name, "name5");
    student[4].math = 64;

    for (int a = 0; a < 5; a++)
    {
        if (student[a].math > student[highest_idx].math)
            highest_idx = a;
    }

    printf("size of student: %d\n", sizeof(student));
    printf("student with highest score: %s, ", student[highest_idx].name);
    printf("and the score is %d\n", student[highest_idx].math);

    system("pause");
    return 0;
}

