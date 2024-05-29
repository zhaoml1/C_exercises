//编写一个函数来计算通过键盘输入的任何整数的阶乘值

# include <stdio.h>
# include <stdbool.h>

int factorial (int (num))
{
    if (num < 0)
    {
        printf("该数为负数，无法计算阶乘。\n");
        return 0;
    }
    if ( num == 0 || num == 1){
         printf("该数阶乘为1。\n");
        return 1;
    }else {
        int result_factorial = 1;
        for ( int i=0; i <= num ; i++){
            result_factorial = result_factorial * i;
        }
         printf("该数为阶乘为%d。\n",result_factorial);
        return result_factorial ;
    }
}

int main()
{
    int num = 0;
    bool keepRunning = true ;
    while (keepRunning){
        printf ("请您输入一个整数：\n");
        if (scanf ("%d",& num ) != 1){
             //清除缓冲区的输入
            while (getchar() != '\n');
            printf ("输入无效，请重新输入。\n");
            continue;
        }else{
           factorial(num);
        }
        printf("您可以再按一次回车键退出程序。\n");  
        if (getchar() == '\n') {  
            keepRunning = false;  
        }  


    }

}