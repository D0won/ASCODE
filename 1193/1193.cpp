#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0)
        {
            printf("No quadratic\n");
        }
        else
        {
            if ((b * b - 4 * a * c) > 0)
            {
                printf("Real\n");
            }
            else if ((b * b - 4 * a * c) == 0)
            {
                printf("%.3lf\n", -b / (2.0 * a));
            }
            else
            {
                printf("Imaginary\n");
            }
        }
    }
    return 0;
}