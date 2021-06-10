#include <iostream>
#include<vector>
#include<cmath>
#define ll long long
ll check(ll i)
{
	for (ll j = 2;j < sqrt(i);j++)
	{
		if (i % j == 0)
			return 0;
	}
	return 1;
}
using namespace std;
int main() {
	ll n;
	cin >> n;
	vector<ll>v;
	for (int i = 2;i<sqrt(n);i++)
	{
		if (n % i == 0)
		{
			if (check(i))
				v.push_back(i);
		}
	}
	cout << v[v.size() - 1];
	return 0;
}
