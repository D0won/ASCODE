#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void Solution1()
{
    int M[1000] = { 0 };
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> M[i];
    }
    sort(M, M + N);
    int pr = M[0];
    cout << M[0] << " ";
    for (int i = 1; i < N; i++)
    {
        if (pr != M[i])
        {
            cout << M[i] << " ";
            pr = M[i];
        }
    }
    cout << "\n";
}
void Solution2()
{
    int M[1001] = { 0 };
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        M[a]++;
    }
    for (int i = 0; i < 1001; i++)
    {
        if (M[i] > 0)
            cout << i << " ";
    }
    cout << "\n";
}

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        //Solution1();
        Solution2();
    }
    return 0;
}
