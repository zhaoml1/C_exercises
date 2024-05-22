/*
题目解读：编写一个程序，可以生成数字1，2，3的所有组合序列，由于题目中未要求序列的长度，以及单个序列中不能有重复数字出现
故要将序列长度
*/
#include <stdio.h>
#include <math.h>

#define MAX_LENGTH 3//假设我们想要生成的最长长度为3的序列

void generate_sequence(int length)
{
    int sequence [MAX_LENGTH];//用于存储序列的数组
   for (int i =0;i<(int)pow(3,length);i++)//总共可能有3^length个序列
   {
        int num = i ;//将十进制转换为3进制
        for (int j = 0; j < length;j++ )
        {
            sequence[length-j-1] = num % 3 +1 ;
            num /= 3;
        }
        //打印序列
        for (int k =0; k < length ; k++)
        {
            printf ("%d",sequence [k]);
        }
        printf ("\n");
   }
}

int main()
{
    int length = 0;
    printf ("Enter the length of the sequences you want to generate (up to %d):", MAX_LENGTH);
    scanf("%d",&length);
    while (length >MAX_LENGTH)
    {
        printf("Length exceeds the maximun allowed (%d).\n",MAX_LENGTH);
        scanf("%d",&length);
    }
    generate_sequence(length);
    return 0;
}