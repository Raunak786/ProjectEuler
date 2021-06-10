#include <iostream>
using namespace std;
//count number of letters 1-1000
int main() {

	int total;

	string s1 = "onetwothreefourfivesixseveneightnine";
	string s2 = "teneleventwelvethirteenfourteenfifteensixteenseventeeneighteennineteen";
	string s3 = "twentythirtyfortyfiftysixtyseventyeightyninety";
	string s4 = "hundredand";
	string s5 = "onethousand";
	//khatarnak logic
	total = (s1.size() + s2.size() ) * 10 +    //1 to 19 x10: 001-019...901-919
		s3.size() * 100 + s1.size() * 80 +   //10x10: 20-29...920-929
		s4.size() * 900 - (3*9) + s1.size() *100 +   //100-199 x9 (- "and" x9), 
		s5.size();   //1000

	cout << total;
	return 0;
}
