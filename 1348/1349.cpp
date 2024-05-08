#include<bits/stdc++.h>
using namespace std;
bool *isPrime = new bool[5000001];

void isPrime3(int n) {
	isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i <= n; i++) {
		isPrime[i] = true;
	}
 
 
	for (int i = 2; i <= n; i++) {
		if (isPrime[i]) {
			for (int j = i * 2; j <= n; j += i) {
				isPrime[j] = false;
			}
		}
	}
}

int main(void)
{
    int T;
    cin >> T;
    while(T--)
    {
        int m, n, k = 1, ch = 0;
        cin >> m >> n;
        if(m > n)
            swap(m, n);
        isPrime3(n);
        for(int i = m; i <n-11; i++)
        {
            if(isPrime[i] && isPrime[i+6] && isPrime[i+12])
            {
                cout << k++ << ": " << i <<"-" <<i+6 << "-"  << i+12 <<"\n";
                ch = 1;
            }
        }
        if(ch == 0)
            cout << "No Sexy Prime Triplets!\n";
    }
    return 0;
}