#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	int x, y;
	while(t--){
	    cin >> x >> y;
	    if(x >= y)  cout << y << endl;
	    else    cout << x - (y - x) << endl;
	}
	return 0;
}