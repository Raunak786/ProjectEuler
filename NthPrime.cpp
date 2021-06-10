#include <iostream>
#include<vector>
#define ll long long
#define ii pair<ll,ll>
#define vi vector<ll>
#define vii vector<ii>
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll maxN = 1000001;
vector<bool>p(maxN+1,1);
void primeSieve()
{
	p[0]=p[1]=0;
	for (ll i = 2;i*i<=maxN ;i++)
	{
		if (p[i] == 1)
		{
			for (ll j = i * i;j <=maxN;j = j + i)
			{
				p[j] = 0;
			}
		}
	}
}
int main() {
	primeSieve();
	vector<ll>v;
	for (ll i = 0;i <=maxN;i++)
	{
		if (p[i] == 1)
			v.push_back(i);
	}
	ll q, n;
	cin >> q;
	while (q--)
	{
		cin >> n;
		cout << v[n - 1] << endl;
	}
	return 0;
}