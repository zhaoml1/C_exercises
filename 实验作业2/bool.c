//导入 stdbool.h 来使用布尔类型

#include <stdbool.h>
#include <stdio.h>

//计算n!,n的值在main中定义
int main(void)
{
    int n =10;              //计算n的阶乘
    int sum = 1;            //用于存放阶乘的结果
    bool flag  = false ;    //叠乘标记

    int num = n ;           //循环次数
    while(!flag){
        sum = sum*(num--);
        //当num = 1时结束循环
        if ( num == 1)
        {
            flag = true ;
        }
    }   
    printf ("%d 的阶乘结果为 %d \n",n,sum);
    return 0;
}