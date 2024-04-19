#include<iostream>
using namespace std;
int main(void)
{
    int T;
    while(T--)
    {
        int M[1000];
        int N;
        cin >> N;
        for(int i = 0; i < N; i++)
        {
            cin >> M[i];
        }

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                if((M[i] == M[j]) && (i != j))
                {
                    M[j] = 0;
                }
            }
        }

        for(int i = 0; i < N; i++)
        {
            if(M[i] != 0)
                cout << M[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}