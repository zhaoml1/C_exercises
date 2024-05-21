#include <stdio.h>
 int main ()
 {
    int matches = 21 ;
    int player_get = 0, computer_get = 0 ;
    printf ("共有火柴21根，每次只能取1-4根。\n");
    for(matches = 21;matches > 0; )
    {
        printf ("玩家请输入要取走的火柴数：");
        scanf ("%d", &player_get);
        while ( player_get < 0 || player_get > 4|| player_get > matches)
        {
            printf ("你输入的数不在1-4范围内，请重新输入:\n");
            scanf ("%d", &player_get);
        }
        computer_get = 5- player_get;
        matches = matches - computer_get -player_get ;
        printf ("系统取走的火柴数为%d \n",computer_get);
        if ( matches == 1 )
        {
            printf ("很抱歉这位玩家你输了，游戏结束。\n");
            break;
        }
        
    }

    return 0;
 }