#include<stdio.h>

int main()
{
    unsigned short int a, b;
    int n;
    scanf("%d %d", &a, &b);
    scanf("%d", &n);
    unsigned short int a1, a2, b1, b2;
    a1 = a >> (16 - n);
    a1 = a1 <<(16 - n);
    b1 = b >> (16 - n);
    b1 = b1 << (16 - n);
    a2 = a << n;
    a2 = a2 >> n;
    b2 = b << n;
    b2 = b2 >> n;
    printf("%d %d", a1 | b2, b1 | a2);
    return 0;
}