#include<stdio.h>
int main(void)
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int H;
        scanf("%d", &H);
        for(int i = 0; i < H; i++)
        {
            int n = 0;
            for(int j = 0; j < H+i; j++)
            {
                if(j >= (H-1) - i && j < (H+1)+i)
                {
                    printf("%c", 'A'+n);
                    if(j < H-1)
                        n++;
                    else
                        n--;
                }
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}