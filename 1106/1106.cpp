#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    cin.tie(0)->sync_with_stdio(0);
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int len = s.length();
        stack<char> st;
        int ch = 1;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == ')')
            {
                if (!st.empty() && st.top() == '(')
                    st.pop();
                else
                    ch = 0;
 
            }
            else if (s[i] == '}')
            {
                if (!st.empty() && st.top() == '{')
                    st.pop();
                else
                    ch = 0;
            }
            else if (s[i] == ']')
            {
                if (!st.empty() && st.top() == '[')
                    st.pop();
                else
                    ch = 0;
            }
            else
                st.push(s[i]);
        }
 
        if (!st.empty() || ch == 0)
            cout << "Retry...\n";
        else
            cout << "Good!\n";
    }
 
     
 
    return 0;
}