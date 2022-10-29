#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>c && b>c){
	        cout<<a+b<<endl;
	    }
	    else if(b>a && c>a){
	        cout<<b+c<<endl;
	    }
	    else if(a>b && c>b){
	        cout<<a+c<<endl;
	    }

	}
	return 0;
}
