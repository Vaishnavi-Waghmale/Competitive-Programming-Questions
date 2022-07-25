#include <iostream>
using namespace std;

int main() {
  
	int T;
	cin>>T;
	while(T--){
	    int n,k;
	    cin>>n>>k;
	    int t=n+1;
	    
	    if(t<=k){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
