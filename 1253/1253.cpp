#include<bits/stdc++.h>
using namespace std;
 
void Convert(int n)
{
    stack<int> st;
    while(n != 0)
    {
        if(n % 2 ==1)
            st.push(1);
        else
            st.push(0);
        n /=2;
    }
    while(st.size() != 8)
    {
        st.push(0);
    }
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
     
}
int main(void)
{
    std::cin.tie(0)->sync_with_stdio(0);
    int testcase;
    std::cin >> testcase;
    while(testcase--)
    {
        string a;
        cin >> a;
        int len = a.length();
        string b = "";
        for(int i = 0; i < len; i++)
        {
            if(a[i] == '.' || i == len - 1)
            {
                if(i == len - 1)
                {
                    b += a[i];
                }
                int e = stoi(b);
                Convert(e);
                b.erase(); 
            }
            else
            {
                b += a[i];
            }
        }
        cout << "\n";
    }
}