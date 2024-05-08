#include<stdio.h>
int main(void)
{
    while(1)
    {
        int m, n, max, min;
        scanf("%d", &m);
        if(m == 0)
            break;
        for(int i = 0; i < m; i++)
        {
            scanf("%d", &n);
            if(i == 0)
            {
                max = n;
                min = n;
            }
            else
            {
                if(n > max)
                    max = n;
                if(n < min)
                    min = n;
            }
        }
        if(max == min)
            printf("Same\n");
        else if((max - min)%3 == 0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}