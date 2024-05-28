/*该程序计算一系列数字的平方根并打印结果。当输入数字9999时，该过程停止*/
# include <math.h>

main()
{
    int count ,  negative;
    double number ,sqroot;
    printf ("Enter 9999 to STOP\n");
    count = 0;
    negative = 0;
    while (count<=100)
    {
        printf ("Enter a number :");
        scanf("%lf",& number);
        if( number == 9999)
            break ;             /*EXIT FROM THE LOOP*/
        if( number < 0)
        {
            printf ("Number is negative\n\n");
            negative ++;
            continue ; /*SKIP REST OF THE LOOP*/
        }
        sqroot = sqrt(number);
        printf ("Number = %lf \nSquare root = %lf\n",number,sqroot);
        count++;
    }
    printf ("Number of items done = %d\n",count);
    printf("\n\nNegative items = %d\n",negative);
    printf ("END OF DATA\n");
}