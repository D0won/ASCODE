#include<bits/stdc++.h>

int main(void)
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        for(int i = 0; i< y; i++)
        {
            for(int j = 0; j < x; j++)
            {
                if(i == 0 || i == y-1 || j == 0 || j == x-1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
}