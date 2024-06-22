#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    cin.tie(0)->sync_with_stdio(0);
    int testcase;
    cin  >> testcase;
    while(testcase--)
    {
        bool check = true;
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0 ; i < n; i++)
        {
            cin >> a[i];
        } 
        sort(a.begin(), a.end());
        for(int i = 0; i < n-1; i++)
        {
            if(a[i+1] - a[i] > 1)
            {
                check = false;
            }
        }
        if(check)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}