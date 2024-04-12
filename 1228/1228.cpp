#include<iostream>
using namespace std;

int main(void)
{
	int T;
	cin >> T;
	while (T--)
	{
		long long n, m, sum = 0;
		cin >> n >> m;
		double A = (n + m) / 2.0;
		sum = A * (double)(m - n+1);
		cout << sum << "\n";
	}
}