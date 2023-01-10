#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--)
	{
		int w1, w2, x1, x2, m;
		cin >> w1 >> w2 >> x1 >> x2 >> m;
		int low = x1 * m;
		int hight = x2 * m;
		int wdiff = w2 - w1;

		if(wdiff >= low && wdiff <= hight)	cout << 1 << endl;
		else	cout << 0 << endl;
	}
	
	return 0;
}