#include<stdio.h>
int main(void)
{
    while(1)
    {
        int m, max, min;
        scanf("%d", &m);
        if(m == 0)
            break;
        for(int i = 0; i < m; i++)
        {
            int n;
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
        printf("%d %d\n", max, min);
    }
    return 0;
}