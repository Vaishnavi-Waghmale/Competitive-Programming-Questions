#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--){
	    int n, d, h;
	    cin >> n >> d >> h;
	    int arr[n];
	    for(int i = 0; i < n;i++)
	        cin >> arr[i];
	    int t = 0;
	    for(int i = 0; i < n && t <= h;i++){
	        (arr[i] > 0 ? t += arr[i]:t -= d);
	        t = max(0, t);
	    }
	    cout << (t > h ? "YES\n":"NO\n");
	    
	}
	return 0;
}
