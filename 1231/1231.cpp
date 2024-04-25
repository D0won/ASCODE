#include<iostream>
using namespace std;

int main(void)
{
<<<<<<< Updated upstream
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
=======
  int T;
  cin >> T;
  while(T--)
  {
    int a, b;
    cin >> a >> b;
    while(b % 2 == 0)
      b /= 2;
    while(b % 5 == 0)
      b /= 5;

      if(a / b != 0)
        cout << "Limited"<< "\n";
      else
        cout << "Unlimited" << "\n";
  }

>>>>>>> Stashed changes
    return 0;
}