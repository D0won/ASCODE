#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    cin.tie(0)->sync_with_stdio(0);
    int board[5][5];
    vector<pair<int, int>> p(25);
    int zero = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >> board[i][j];
            p[board[i][j]-1] = {i , j};
        }
    }
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int erase;
        cin >> erase;
        board[p[erase-1].first][p[erase-1].second] = 0;
    }
    for(int i = 0; i < 5; i++)
    {
        int zero1 = 0, zero2 = 0;
        for(int j = 0; j < 5; j++)
        {
            if(board[i][j] == 0)
                zero1++;
            if(board[j][i] == 0)
                zero2++;
        }
        if(zero1 == 5)
            zero++;
        if(zero2 == 5)
            zero++;
    }
    if(!board[0][0] && !board[1][1] && !board[2][2] && !board[3][3] && !board[3][3])
        zero++;
    if(!board[0][4] && !board[1][3] && !board[2][2] && !board[3][1] && !board[4][0])
        zero++;
    cout << zero << "\n";
    return 0;
}