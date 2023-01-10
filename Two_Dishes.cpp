#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int n, a, b, c;
	while(t--){
	    cin >> n >> a >> b >> c;
	    int others = a + c;
	    if(b <= others && b >= n)    cout << "YES" << endl;
	    else if(others <= b && others >= n)   cout << "YES" << endl;
	    else    cout << "NO" << endl;
	}
	return 0;
}
