#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
        int n, space_limit, si, ri;
        int maxrating = 0;
        cin >> n >> space_limit;
        for(int i = 0; i < n; i++){
            cin >> si >> ri;
            if(ri > maxrating && si <= space_limit) maxrating = ri;
        }
        cout << maxrating << endl;
	}
	return 0;
}