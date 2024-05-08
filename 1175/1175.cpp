#include<stdio.h>
int main(void)
{
    int m, n, num = 0;
    scanf("%d %d", &m, &n);
    for(int i = m; i <= n; i++)
    {
        if(i%7 == 0)
            num+=i;
    }
    printf("%d\n", num);
    return 0;
}