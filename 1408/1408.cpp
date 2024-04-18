#include<iostream>
#include<cmath>
using namespace std;
bool CheckPelindrom(int X)
{
    for(int b = 2; b <= 36; b++)
    {
        int a = 1;
        int tmpX = X;
        string str = "";
        while(tmpX != 0)
        {
            if(tmpX % b < 10)
                str += (char)(tmpX % b + '0');
            else
                str += (char)(tmpX % b - 10 + 'A');
            tmpX /= b;
        }
        int len = str.length();
        int flen = len/2;
        for(int i = 0; i < flen; i++)
        {
            if(str[i] != str[len - i - 1])
            {
                a = 0;
            }
        }
        if(a == 1)
            return 1;
    }
    return 0;
}
int main(void)
{
    int T;
    cin >> T;
    while(T--)
    {
        int x;
        cin >> x;
        if(CheckPelindrom(x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}