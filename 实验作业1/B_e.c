#include <stdio.h>
int main()
{
    int i = 0;
    int a=0,b,c=0;
    for( i=1 ; i <= 500;i++)
    {
        a = i % 10;
        b = (i/10) % 10;
        c = (i/10) % 10;
        if (a*a*a + b*b*b + c*c*c == i)
            printf (" %d是阿姆斯特朗数。\n",i );
    }
    return 0;
}