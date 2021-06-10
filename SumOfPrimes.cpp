#include <iostream>
#include<vector>
#define ll long long
using namespace std;
void primeSieve(vector<ll>&p, ll n)
{
	for (ll i = 3;i < n;i += 2)
	{
		p[i] = 1;
	}
	for (ll i = 3;i < n;i += 2)
	{
		if (p[i] == 1)
		{
			for (ll j = i * i;j < n;j = j + i)
			{
				p[j] = 0;
			}
		}
	}
	p[2] = 1;
	p[0] = p[1] = 0;
}

int main() {
	ll n,s=0;//n is the range of nummbers
	cin >> n;
	vector<ll>p(n,0);

	primeSieve(p,n);
	vector<ll>v;
	for (ll i = 0;i < n;i++)
	{
		if (p[i] == 1)
			s = s + i;
	}
	cout << s;
	return 0;
}