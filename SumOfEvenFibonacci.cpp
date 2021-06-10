#include <iostream>
#include<cmath>
#define ll long long
using namespace std;
int main() {
	ll a = 1, b = 2, c, s = 0, last;
	cin >> last;
	while (b <= last)
	{
		if (b % 2 == 0)
		{
			s=s+b;
		}
		c = a + b;
		a = b;
		b = c;
	}
	cout << s << endl;
	return 0;
}
