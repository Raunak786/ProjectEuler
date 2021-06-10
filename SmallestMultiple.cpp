#include <iostream>
#include<cmath>

#define ll long long
ll gcd(ll a, ll b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
using namespace std;
int main() {
	ll n,m,s=0,p=0;
	cin >> n >> m;
	ll factor = n;
	ll lcm;
	for (ll i = n+1;i <= m;i++)
	{
		lcm = factor * i / (gcd(factor, i));
		factor = lcm;
	}
	cout << lcm;
	return 0;
}

