#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    cin.tie(0)->sync_with_stdio(0);
    stack<int> x;
    while(1)
    {
        string a;
        cin >> a;
        if(a == "PUSH")
        {
            int num;
            cin >> num;
            x.push(num);
        }
        else if(a == "POP")
        {
            if(x.empty())
            {
                cout << "ERROR\n";
            }
            else
            {              
                cout << x.top() << "\n";
                x.pop();
            }
        }
        else if(a == "SIZE")
        {
            cout << x.size() << "\n";
        }
        else if(a == "CLEAR")
        {
            while(!x.empty())
            {
                x.pop();
            }
        }
        else
            break;
    }
    return 0;
}