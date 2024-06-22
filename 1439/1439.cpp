#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    cin.tie(0)->sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    int big = 0, small = 0;
    big += n/45;
    if(n%45 > 25)
        big++;
    else
        small++;
    if(m >= 15)
        small++;
    if(big > 0 )
    {
        cout << "Big bus : " << big << "\n";
    }
    if(small > 0)
    {
        cout << "Small bus : " << small << "\n";
    }
    return 0;
}