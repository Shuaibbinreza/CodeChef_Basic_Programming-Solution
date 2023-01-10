#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--)
	{
		int a, b;
		cin >> a >> b;
		if(a < b || b == 0)	cout << a << endl;
		else if(a == 0)	cout << 0 << endl;
		else{
			int diff = a / b;
			int x = b * diff;
			int ans = a - x;
			cout << ans << endl;
		}
	}
	
	return 0;
}
