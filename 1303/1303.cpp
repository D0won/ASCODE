#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    char a[9] = {'A', 'B', 'C', 'G', 'J', 'L', 'M', 'P', 'T'};
    while(T--)
    {
        int n, m;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            m = 0;
            for(int j = 0; j < n; j++)
            {
                cout << a[m];
                if(j < i)
                    m++;
                if(j >(n-2)-i)
                    m--;
            }
            cout << "\n";
        }
        cout <<"\n";
    }    
    return 0;
}