#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a, b, c;
	    cin>>a>>b>>c;
	    
	    int p, q, r;
	    
	    p = a+b;
	    q=b+c;
	    r= a+c;
	    if(p%2 !=0 || q%2 !=0 || r%2 !=0){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
