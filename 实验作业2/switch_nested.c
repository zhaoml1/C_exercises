# include <stdio.h>

int main()
{
    /*局部变量定义*/
    int a = 100;
    int b = 100;

    switch (a){
        case 100:
            printf ("这是外部 switch的一部分\n");
            switch(b){
                case 200:
                    printf("这是内部switch的一部分\n");
            }
    }
    printf ("a的准确值是%d \n",a);
    printf ("b的准确值是%d\n",b);

    return 0;
}