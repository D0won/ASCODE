#include<stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int n, minus = 0, plus = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            int num;
            scanf("%d", &num);
            if(num < 0)
                minus++;
            else if(num > 0)
                plus++;
            else
                num = num;
        }
        printf("%d %d\n", minus, plus);
    }
    return 0;
}