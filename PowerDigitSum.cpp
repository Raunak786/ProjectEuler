#include <iostream>
#include<vector>
#define ll long long
using namespace std;
void multiply(ll *v,ll &n, ll no)
{
	ll carry = 0,product;
	for (ll j = 0;j < n;j++)
	{
		product = v[j] * no + carry;
		v[j] = product % 10;
		carry = product / 10;
	}
	while (carry)
	{
		v[n] = carry % 10;
		carry = carry / 10;
		n++;
	}
}
int main() {
	ll a;
	cin >>a;
	ll s=0;
	ll* v = new ll[1000];
	v[0] = 1;
	ll n = 1;
	for (ll i = 1;i <= a;i++)
	{
		multiply(v, n, 2);
	}
	for (ll k = n - 1;k >= 0;k--)
	{
		s = s + v[k];
	}
	cout << s;
	return 0;
}
