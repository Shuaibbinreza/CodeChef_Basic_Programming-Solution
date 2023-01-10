#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--)
	{
		int u, v, s, a;
		cin >> u >> v >> a >> s;
		if(u == v){
			cout << "Yes" << endl;
		}
		else{
			double vv2 = (double)(u*u) - 2.0 * (double)a * (double)s;
			if(vv2 <= 0)	cout << "Yes" << endl;
			else{
				double vv = sqrt(vv2);
				if(vv <= v)	cout << "Yes" << endl;
				else	cout << "No" << endl;
			}
			
		}
	}
	
	return 0;
}