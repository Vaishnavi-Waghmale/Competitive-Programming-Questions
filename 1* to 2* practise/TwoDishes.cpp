#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, s;
	    cin>>n>>s;
	    int diff;
        if(s<=n){
            diff=s;
        }
        else{
            diff=(n-s)+n;
        }
        cout<<diff<<endl;
	}
	return 0;
}
