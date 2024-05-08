#include<stdio.h>
int main(void)
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if(a >= 'A' && a <= 'Z' && b >= 'A' && b <= 'Z')
            printf("%c%c\n", a^32, b^32);
        else if(a >= 'a' && a <='z' && b >= 'a' && b <= 'z')
            printf("%c%c\n", a^32, b^32);
        else if((a >= 'A' && a <= 'Z' || a >= 'a' && a <='z') && (b >= 'A' && b <= 'Z' ||b >= 'a' && b <= 'z'))
            printf("%c%c\n", a, b);
        else
            printf("No Alphabet!\n");

    }
    return 0;
}