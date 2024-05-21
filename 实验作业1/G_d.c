# include <stdio.h>
int main ()
{
    int overduedays = 0;
    printf ("请输入你逾期未归还图书的天数。\n");
    scanf ("%d",&overduedays);
    if (overduedays>0 && overduedays <= 5)
        printf ("你的罚款金额是50派萨。\n");
    else if (5 < overduedays && overduedays <= 6)
        printf ("你的罚款金额是1卢布。\n");
    else if (10 < overduedays && overduedays <= 30)
        printf ("你的罚款金额是5卢布。\n");
    else if ( overduedays > 30)
        printf ("您的会员资格已被取消。\n");
    return 0;
}