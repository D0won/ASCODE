#include<iostream>
#include<algorithm>
using namespace std;


int main(void)
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		int i = 0;
		while (n != 1)
		{
			if (n % 2 == 0)
			{
				n = n / 2;
			}
			else
			{
				n = n * 3 + 1;
			}
			i++;
		}
		cout << i << "\n";
	}
	return 0;
}

