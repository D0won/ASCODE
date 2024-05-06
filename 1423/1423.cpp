#include<bits/stdc++.h>
using namespace std;
 
bool CheckWord(string a[], string w, int n)
{
    int len = w.length();
    int n1 = 0, n2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-len+1; j++)
        {
            if (a[i][j] == w[0])
            {
                int k;
                for (k = 0; k < len; k++)
                {
                    if (a[i][j + k] != w[k])
                        break;
                }
                if (k == len)
                    return 1;
            }
            if (a[j][i] == w[0])
            {
                int k;
                for (k = 0; k < len; k++)
                {
                    if (a[j + k][i] != w[k])
                        break;
                }
                if (k == len)
                    return 1;
            }
        }
    }
    return 0;
}
int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        string arr[50];
        string word;
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        cin >> word;
        if (CheckWord(arr, word, N))
        {
            cout <<"YES\n";
        }
        else
            cout <<"NO\n";
    }
    return 0;
}