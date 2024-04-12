#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
	int T;
	cin >> T;
	while (T--)
	{
		int N;
		int B[10000] = { 0 };
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> B[i];
		}
		sort(B, B + N);
		int check = 0;
		for (int i = N - 1; i >= 2; i--)
		{
			if (B[i - 1] + B[i - 2] >= B[i])
			{
				cout << B[i - 2] + B[i - 1] + B[i] << "\n";
				check = 1;
				break;
			}
		}
		if (check == 0)
			cout << "0" << "\n";
	}
	return 0;
}