#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    cin.tie(0)->sync_with_stdio(0);
    int T;
    cin >> T;
    while(T--)
    {
        double a, b, c;
        cin >> a >> b >> c;
        int d = b*b - 4*a*c;
        if(a == 0)
            printf("No quadratic\n");
        else if(d > 0)
        {
            double val1 = ((-1)*b + sqrt(b*b - 4*a*c))/2*a, val2 = ((-1)*b - sqrt(b*b - 4*a*c))/2*a;
            printf("%.3f %.3f\n", val1 > val2 ? val1 : val2, val1 > val2 ? val2 : val1);
        }
        else if(d == 0)
        {
            printf("%.3f\n", (-1)*b/2*a);
        }
        else
            printf("Imaginary\n");
    }
    return 0;
}