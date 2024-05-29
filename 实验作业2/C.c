# include <stdio.h>
# include <stdbool.h>
# include <math.h>

//定义阶乘函数
int factorial(int num){             
    if (num < 0){
        printf("该数为负数,无法计算阶乘。\n");
        return 0;
    }else{
        int result_factorial =1;
        if( num == 0|| num == 1)        //注意0和1的阶乘都是1
        {
            return 1;
        }
        
        for (int i=1; i<= num ;i++)
        {
            result_factorial = result_factorial*i;
        }
        return result_factorial;
    }
}

//定义判断是否为素数函数
bool isPrime(int num){            //  定义判断是否为素数
    if (num <2){                   //素数是指在大于1的自然数中，除了1和它本身外不能被其他自然数整除的数
        return false;
    }                    
    for(int i=2; i <= sqrt(num) ; i++)
    {
         if (num % i == 0)
            return false;
    }
    return true;
 }

//声明一个判断奇偶性的函数
void determineParity(int num){          
    if ( num % 2 == 0){
        printf("该数为偶数\n");
    }else{
        printf("该数为奇数\n");
    }
}

int main()
{
    int num = 0 ,instruction = 0;
    bool keepRunning = true;

    while (keepRunning){
        printf("请输入一个整数：\n");
        if ( scanf("%d",&num) != 1)
        {
            //清除输入缓冲区的错误输入
            while (getchar() != '\n');
            printf ("输入无效，请重新输入。\n");
            continue;
        }

        printf("请根据菜单的提示选择您接下来的操作:\n");
        printf("1:返回输入数的阶乘\n3:判断该数的奇偶性\n4:退出程序\n");
        printf("2:判断该数是否为素数\n");
        printf("3:判断该数的奇偶性\n");
        printf("4:退出程序\n");

        if (scanf ("%d",&instruction) != 1)
        {
            //清除输入缓冲区的错误输入
            while (getchar() != '\n');
            printf("输入无效，请重新输入操作。\n");
            continue;
        }
        
        switch(instruction)
        {
            case 1:
                printf("输入数的阶乘为： %d\n",factorial(num));
                break;
            case 2:
                if (isPrime(num)){
                    printf ("该数是素数\n");
                }else{
                    printf("该数不是素数\n");
                }
                break;
            case 3:
                determineParity(num);
                break;
            case 4:
                keepRunning = false ;
                printf ("退出程序。\n");
                break;
            default:
                printf("无效的选择，请重新输入。\n");
        }
    }
    return 0;
}