#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    
	    if(x>100){
	        x = x-10;
	    }
	    cout<<x<<endl;
	}
	return 0;
}
