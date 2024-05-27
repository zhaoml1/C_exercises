/*函数指针
typedef int (*fun_ptr)(int,int),声明一个指向同样参数、返回值的函数指针类型
以下实例声明了函数指针变量p，指向函数max
*/
# include <stdio.h>

int max(int x,int y)//定义max函数，用于返回两个整数中的较大值
{
    return x > y ? x : y ;//如果x > y为真返回x，否则返回y
}

int main(void)
{
    /*p是函数指针*/
    int (*p)(int ,int ) = & max;
    /*定义了一个函数指针p,指向一个接受两个整数并返回一个整数的函数，这里p被初始化为max函数的地址
    但注意，在C语言中，当函数名在表达式中使用时，它会自动转换为指向该函数的指针
    因此&max和max在这里时等价的
    */
    int a, b, c, d;

    printf ("请输入三个数字：");
    scanf("%d %d %d",& a, & b,& c);

    /*与直接调用函数等价，d = max (max(a,b),c)*/
    d = p(p(a,b),c);

    printf ("最大的数字是：%d\n",d);

    return 0;
}