#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m = 0;
        cin >> n;
        if (n % 2 == 0)
            n++;
        for (int i = 0; i < n/2+1; i++)
        {

            for (int j = 0; j < n; j++)
            {
                if (j <= i || j >= n - i - 1)
                    cout << "*";
                else
                    cout << " ";

            }
            cout << "\n";
        }
        for (int i = 0; i < n / 2; i++)
        {

            for (int j = 0; j < n; j++)
            {
                if (j <= i || j >= n - i - 1)
                    cout << " ";
                else
                    cout << "*";

            }
            cout << "\n";
        }
    }
    return 0;
}