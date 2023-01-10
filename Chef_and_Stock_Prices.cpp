#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--)
	{
		int a, b, s, c;
		cin >> s >> a >> b >> c;
		bool ck;
		if(c >= 0)	ck = true;
		else ck = false;
		c = abs(c);
		double newprice;
		if(ck)	newprice = s + (((double)s * (double)c) / 100.0);
		else	newprice = s - (((double)s * (double)c) / 100.0);
		//cout << newprice << endl;

		if(newprice >= a && newprice <= b)	cout << "YES" << endl;
		else	cout << "NO" << endl;
	}
	
	return 0;
}