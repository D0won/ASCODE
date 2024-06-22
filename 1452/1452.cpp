#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    cin.tie(0)->sync_with_stdio(0);
    while(1)
    {
        int n;
        cin >> n;
        if(n == 0)
            break;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        sort(b.begin(), b.end(), less<int>());
        int c = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == b[i])
                c++;
        }
        cout << c << "\n";
    }
}