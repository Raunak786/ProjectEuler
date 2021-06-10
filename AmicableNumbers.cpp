/*Let d(n) be defined as the sum of proper divisors of n(numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a ≠ b, then aand b are an amicable pairand each of aand b are called amicable numbers.

For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.*/
#include <iostream>
#include<set>
#define ll long long
using namespace std;
ll check(ll num)
{
	ll result = 0;

	// find all divisors which divides 'num' 
	for (int i = 2; i <= sqrt(num); i++)
	{
		// if 'i' is divisor of 'num' 
		if (num % i == 0)
		{
			// if both divisors are same then add 
			// it only once else add both 
			if (i == (num / i))
				result += i;
			else
				result += (i + num / i);
		}
	}

	// Add 1 to the result as 1 is also a divisor 
	return (result + 1);
}
int main() {
	set<ll>v;
	ll n,s=0;
	cin >> n;
	for (int i = 21;i <n;i++)
	{
		if (check(check(i)) == i && i!=check(i))
		{
			v.insert(i);
			v.insert(check(i));
		}
	}
	for (auto x : v)
	{
		cout << x << " ";
		s = s + x;
	}
	cout << endl<<s;
	return 0;
}
