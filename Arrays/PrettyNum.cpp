#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int l, r;
	    cin>>l>>r;
	    int cnt=0;
	    
	    for(int i=l; i<=r; i++){
	        int p = i%10;
	        if(p==2 || p==3 || p==9){
	            cnt++;
	        }
	    }
	    
	    cout<<cnt<<endl;
	}
	return 0;
}
