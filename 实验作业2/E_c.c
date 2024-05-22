#include <stdio.h>

int main()
{
    int i = 1;
    float factorial = 1.0, sum = 0.0;
    for (i = 1; 0 <= i && i < 7; i++)
    {
        factorial *= i;
        sum = sum + (i/factorial);
    }
    printf("%f",sum);
    return 0;
}