#include <iostream>
using namespace std;
int main(){
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if(a+b == c||b+c == a||a+c == b)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	    
	}
	return 0;
}
