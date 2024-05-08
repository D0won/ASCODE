#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    while(T--)
    {
        int n, m = 0;
        cin >> n;
        if(n%2 == 0)
            n++;
        for(int i = 0; i < n; i++)
        {
            
            for(int j = 0; j < n; j++)
            {
                if(j <= m || j >= n-m-1)
                    cout << "*";
                else
                    cout << " ";
                
            }
            if(i < n/2)
                m++;
            else
                m--;
            cout << "\n";
        }
    }
    return 0;
}