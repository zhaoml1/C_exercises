#include <stdio.h>

void decimal_octal (int decimal)
{
    int octal [32] ={0}, i = 0;
    while ( decimal != 0)
    {
        octal[i] = decimal % 8 ;
        decimal /= 8;
        i++;
    }
    
    if( i==0 ) 
        printf ("0");
    else 
    {
        for (int j= i-1 ; j >= 0 ; j--)
        {
            printf("%d",octal [j]);
        } 
    }
}

int main()
{
    int decimal = 0;
    printf ("请输入一个十进制数：\n");
    scanf("%d",&decimal);
    decimal_octal (decimal);
    return 0;
}