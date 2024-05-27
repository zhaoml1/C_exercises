/*打印一个字符金字塔*/
#include <stdio.h>

int main(){
    int i = 0, j = 0, k = 0;
    char letter ;
    for ( i = 0; i < 7 ; i++){
        //打印左边的字母
        for ( j = 0; j < 7-i ;j++){
            printf("%c",'A'+ j);
        }
        //打印中间的空格
        for( k = 0; k < 2*i-1 ;k++){
            printf(" ");
        }
        //打印右边的字母
        for( j =7-1-i; j >= 0;j--){
            //防止在行首打印多余的空格
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}