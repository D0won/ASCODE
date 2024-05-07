#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    while(T--)
    {
        int S;
        cin >> S;
        int n = S;
        for(int i = 0; i < S; i++)
        {
            for(int j = 0; j < S; j++)
            {
                if(i%2 == 0)
                {
                    if(j == 0 || j == S - 1)
                        cout << "*";
                    if(j >= i && j <= (S-1) - i)
                        cout << "*";
                    else
                        cout <<" ";
                }
                else if(j == 0 || j == S-1)
                    cout << "*";
                else
                    cout << " ";
            }
            printf("\n");
        }
    }
}