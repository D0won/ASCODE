#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    cin.tie(0)->sync_with_stdio(0);
    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        int n;
        cin >> n;
        cout << "Case #" << t+1 << ":\n";
        for(int i = 0; i < n; i++)
        {
            
            for(int j = 0; j <= i; j++)
            {
                cout << "*";
            }
            cout << "\n";
            
        }
        for(int i = 0; i < n-1; i++)
        {
            for(int j = 0; j < (n-1) - i; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
        cout << "\n";
    }
}
