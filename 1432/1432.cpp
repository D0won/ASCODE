#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
	int m;
	cin >> m;
	for (int i = 1; i < m; i++)
	{
		for (int j = i; j < m; j++)
		{
			for (int k = 1; k <= m; k++)
			{
				if (pow(i, 2) + pow(j, 2) == pow(k, 2))
					cout << i << ", " << j << ", " << k << "\n";
			}
		}
	}
}