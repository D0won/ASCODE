#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    cin.tie(0)->sync_with_stdio(0);
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        int sum = 0;
        vector<int> st(n);
        for(int i = 0; i < n; i++)
        {
            cin >> st[i];
        }
        int aver = accumulate(st.begin(), st.end(), 0) / st.size();
        int sta = 0;
        for(int i = 0; i < n; i++)
        {
            if(st[i] > aver)
                sta++;
        }
        cout << sta << " from total " << n << "\n";
    }
}