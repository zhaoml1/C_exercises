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
            if(j == 6){                 //由于字符金字塔的G只有一个G，所以在打印右边的字母时，需要从F开始循环
                j = 5;
                printf("%c",'A'+j);
            }else{
                printf("%c",'A'+j);
            }
        }
        printf("\n");
    }
    return 0;
}