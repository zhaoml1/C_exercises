#include <stdio.h>
int main(){
    char ch = 0 ;
    printf("请输入一个字符：");
    int i  =  getchar();
    if(i >= 65 && i <= 90 ){
        printf("输入的是一个大写字母");
    }else if (i >=97 && i <= 122){
        printf ("输入的是一个小写字母");
    }else if ( i >= 48 && i <= 57){
        printf("输入的是一个数字");
    }else if ((i >= 0 && i <= 47)||( i >= 58 && i <= 64)||(i >=91 && i<= 96)||(i >= 123 && i <= 127) ){
        printf("输入的是一个特殊符号");
    }
    return 0;

}