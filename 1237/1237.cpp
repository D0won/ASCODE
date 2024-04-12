#include<iostream>
#include<algorithm>
using namespace std;


int main(void)
{
	while(1)
	{
		int y = 0;
		int max = 0;
		int a, b;
		int ia, ib;
		if (!(cin >> a >> b)) break;
		ia = a, ib = b;
		if (a > b)
		{
			int tmp = ib;
			ib = ia;
			ia = tmp;
		}
		for (int i = ia; i <= ib; i++)
		{
			int day = 1;
			int ii = i;
			while (ii != 1)
			{

				if (ii % 2 == 0)
				{
					ii = ii / 2;
				}
				else
				{
					ii = ii * 3 + 1;

				}
				day++;
			}

			if (day > max)
			{
				max = day;
			}
		}

		cout << a << " " << b << " " << max << "\n";
	}
	return 0;
}

