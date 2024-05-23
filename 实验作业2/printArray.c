#include <stdio.h>
void printArray (int arr[],int size)
{
    for (int i=0;i < size; i++)
    {
        printf ("%d ",arr[i]);//数组名arr被当作指针使用
    }
}

int main(){
    int myArray[5] = {10,20,30,40,50};
    printArray(myArray,5);//调用printArray函数，这行代码进行了传参,size为已知参数
    return 0;
}