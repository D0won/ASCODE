#include<iostream>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    while(T--)
    {
        int A, B;
        cin >> A >> B;

        while(B % 2 == 0)
        {
            B/=2;
        }
        while(B % 5 == 0)
        {
            B/=5;
        }
        if(A % B == 0)
        {
            cout <<"Limited\n";
        }
        else
        {
            cout <<"Unlimited\n";
        }
    }
    return 0;
}