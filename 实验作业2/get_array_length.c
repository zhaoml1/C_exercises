//使用sizeof

/* #inlcude <stdio.h>

int  main(){
    int array[]={1,2,3,4,5};
    int length = sizeof (array)/sizeof (array[0]);

    printf ("数组长度为：%d\n",length);

    return 0;
} */


//使用宏定义
#include <stdio.h>

#define LENGTH(array) (sizeof(array)/sizeof (array[0]))


int main(){
    int array[]= {0,1,2,3,4,5};
    int length = LENGTH(array);

    printf("数组长度为：%d\n",length);

    return 0;
}



