#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,x;
	    cin>>a>>b>>x;
	    for(int i=1; i<100000; i++){
	        a= a+x;
	        if(a>=b){
	            cout<<i<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
