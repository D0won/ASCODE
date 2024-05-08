#include<stdio.h>
int main(void)
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int price, day = 0, pay = 9500;
        scanf("%d", &price);
        while(price > 0)
        {
            price -= pay*6;
            day++;
        }
        printf("%d\n", day);
    }
    return 0;
}