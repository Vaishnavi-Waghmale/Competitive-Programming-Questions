#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float s,a,b,c;
	    cin>>s>>a>>b>>c;
	    float check;
	    check = s+((s*c)/100);
	    if(check>=a && check<=b){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
