#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--)
	{
		int n, m;
		cin >> n >> m;
		
		if(n == m)	cout << 1 << endl;
		else{
			int diff = m - n;
			int res = diff * 2 + 1;
			cout << res << endl;
		}
	}
	
	return 0;
}