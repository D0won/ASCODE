#include<bits/stdc++.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int a;
        scanf("%d", &a);
        double root3 = sqrt(3.0);
        printf("%.5lf\n", root3 * a * a / 4.0);
    }
}