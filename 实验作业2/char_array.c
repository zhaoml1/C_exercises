/*创建一个字符型的多维数组
二维数组存放字符串，读取时当一维数组使用*/
#include <stdio.h>

int main()
{
    int i = 0;
    char name[5][50] = {"马超","赵云","李信","关羽","张飞"};
    for ( i = 0 ; i < 5 ; i++)
    {
        printf ("英雄的名称：%s\n",name[i]);
    }
    return 0;

}