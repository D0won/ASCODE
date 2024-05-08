#include <stdio.h>
int main()
{
    while(1)
    {
        int price, day = 0, money = 5000;
        scanf("%d", &price);
        if (price == 0)
        {
            break;
        }
        while(price > 0)
        {
            price -= money;
            day++;
            money += 100;
        }
        printf("%d\n", day);
    }
}