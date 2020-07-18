#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct data
{
    char name[10];
    int math;
} student[5];

struct data *ptr = student;

int highest_idx = 0;

int main(void)
{     
    strcpy(ptr->name, "name1");
    ptr->math = 65;

    strcpy((ptr+1)->name, "name2");
    (ptr+1)->math = 65;
    
    strcpy((ptr+2)->name, "name3");
    (ptr+2)->math = 99;
    
    strcpy((ptr+3)->name, "name4");
    (ptr+3)->math = 65;
    
    strcpy((ptr+4)->name, "name5");
    (ptr+4)->math = 65;

    for (int idx = 0; idx < 5; idx++)
    {
        if ((ptr + idx)->math > (ptr + highest_idx)->math)
            highest_idx = idx;
    }

    printf("size of student: %d\n", sizeof(student));
    printf("student with highest score: %s, ", (ptr + highest_idx)->name);
    printf("and the score is %d\n", (ptr + highest_idx)->math);

    system("pause");
    return 0;
}

