#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int res = n / 2 + 1;
	    if(n == 1)  cout << 1 << endl;
	    else    cout << res << endl;
	}
	return 0;
}