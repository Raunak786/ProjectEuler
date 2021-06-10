/*The following iterative sequence is defined for the set of positive integers :

n → n / 2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence :

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence(starting at 13 and finishing at 1) contains 10 terms.Although it has not been proved yet(Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain ?

NOTE : Once the chain starts the terms are allowed to go above one million.*/
#include <iostream>
#include<stack>
#define ll long long
using namespace std;
ll check(ll a)
{
	ll ct=0;
	while (a != 1)
	{
		if (a % 2 == 0)
			a = a / 2;
		else
			a = 3 * a + 1;
		ct++;
	}
	return ct;
}
int main() {
	ll n;
	stack<ll>s;
	pair<ll,ll>pr;
	cin >> n;
	ll i = n;
	ll m=check(n);
	s.push(n);
	while(i > 1)
	{
		if (check(i) > m)
		{
			m = check(i);
			s.pop();
			s.push(i);
			pr.first=i;
			pr.second=check(i);
		}
		i--;
	}
	cout << s.top()<<endl<<pr.first<<" "<<pr.second;
	return 0;
}
