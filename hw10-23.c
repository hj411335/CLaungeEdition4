#include <stdio.h>
#include <stdlib.h>

int arr[2][4] = {{1,2,3,4},{6,7,8,9}};

int main(void)
{     
    printf("arr = %d\n",arr); 
    printf("arr[0] = %d\n",arr[0]); 
    printf("arr[1] = %d\n",arr[1]); 
    printf("arr+1 = %d\n",arr+1); 
    printf("*(arr+0) = %d\n",*(arr+0));
    printf("*(arr+1) = %d\n",*(arr+1));
    printf("*(*(arr+1)+0) = %d\n",*(*(arr+1)+0));
    printf("*(*(arr+1)+1) = %d\n",*(*(arr+1)+1));
    printf("*(*(arr+1)+2) = %d\n",*(*(arr+1)+2));
    printf("*(*(arr+1)+3) = %d\n",*(*(arr+1)+3));

    system("pause");
    return 0;
}

