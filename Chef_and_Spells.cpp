#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	int arr[4];
	while(t--){
	    for(int i = 0; i < 3; i++){
	        cin >> arr[i];
	    }
	    sort(arr, arr+3);
	    cout << arr[2] + arr[1] << endl;
	}
	return 0;
}
