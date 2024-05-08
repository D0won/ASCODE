#include<stdio.h>
int main(void)
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int a, b, max, min, count;
        scanf("%d %d", &a, &b);
        if(a > b)
        {
            int tmp = a;
            a = b;
            b = tmp;
        }
        for(int i = a; i <= b; i++)
        {
            int num = i;
            count = 0;
            while(num != 1)
            {
                if(num % 2 == 0)
                    num /= 2;
                else
                    num = 3 * num + 1;
                count++;
            }
            count++;
            if(i == a)
            {
                max = count;
                min = count;
            }
            if(count > max)
            {
                max = count;
            }
            if(count < min)
            {
                min = count;
            }
        }
        printf("%d %d\n", max, min);
    }
    return 0;
}