#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
  int n;
  cin >> n;
  int a1[16], b1[16];
  int a2[16][16], b2[16][16];
  int arr[16][16];
  for(int i = 0; i < n; i++)
    cin >> a1[i];
  for(int i = 0; i < n; i++)
    cin >> b1[i];
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      a2[i][j] = a1[i] / pow(2, (n-1)-j);
      a1[i] %= (int)pow(2, (n-1)-j);
      b2[i][j] = b1[i] / pow(2, (n-1)-j);
      b1[i] %= (int)pow(2, (n-1)-j); 
    }
  }
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      arr[i][j] = a2[i][j] | b2[i][j];
    }
  }

  for(int i = 0; i < n; i++)
  {
    cout << "[";
    for(int j = 0; j < n; j++)
    {
      if(arr[i][j] == 0)
        cout << " ";
      else
        cout << "#";
    }
    cout << "]" << "\n";
  } 
  return 0;
}