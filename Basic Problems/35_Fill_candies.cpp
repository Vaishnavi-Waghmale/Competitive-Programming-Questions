#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int n,k,m;
        cin>>n>>k>>m;
        
        int h;
        h=m*k;
        if(n%h==0){
	        cout<<n/h<<endl;
	    }
	    else{
	        cout<<(n/h)+1<<endl;
	    }
        
    }
	return 0;
}
