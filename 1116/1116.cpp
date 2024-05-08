#include<stdio.h>
int main(void)
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int m, max, min;
        scanf("%d", &m);
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
        if(max < 0 || min < 0)
            printf("HMM!\n");
        else if(max + min == 0)
            printf("ZERO\n");
        else if((max + min)% 7 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}