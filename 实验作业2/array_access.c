#include <stdio.h>

int main()
{
    /*一个带有5行2列的数组*/
    int a [5][2] = { {0,0},{1,2},{2,4},{3,6},{4,8}};
    int i = 0,j = 0;

    /*输出数组中每个元素的值*/
    for( i = 0 ;i < 5; i++ )
    {
        for ( j = 0; j < 2; j++)
        {
            printf ("a[%d][%d] = %d\n",i,j,a[i][j] );
        }
    }
    return 0;
}