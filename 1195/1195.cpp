#include<stdio.h>
int main(void)
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int sum = 0;
        for(int i = 0; i < 6; i++)
        {
            int n;
            scanf("%d", &n);
            sum += n;
        }
        if(sum > 80 && sum < 181)
            printf("GOOD\n");
        else
            printf("NOT GOOD\n"); 
    }
    return 0;
}