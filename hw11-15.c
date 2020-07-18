#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct data
{
    char name[10];
    int math;
}student[5];

struct data *ptr = student;

void add5(struct data *ptr1)
{
    struct data *local_ptr = ptr1;

    local_ptr->math += 5;

    ptr1 = local_ptr;
}


int main(void)
{     
    ptr->math = 10;

    printf("%d\n", ptr->math);

    add5(ptr);

    printf("%d\n", ptr->math);

    system("pause");
    return 0;
}

