#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int a, b, c, d, x;
	while(t--){
	    cin >> a >> b >> c >> d >> x;
	    int diff = abs(a - c) + abs(b - d);
	    if(diff > x)    cout << "NO" << endl;
	    else if((x - diff) % 2 == 0)    cout << "YES" << endl;
	    else    cout << "NO" << endl;
	}
	return 0;
}
