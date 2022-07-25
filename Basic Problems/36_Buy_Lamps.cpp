#include <iostream>
using namespace std;
int min(int x,int y){
    if(x>y){
        return y;
    }
    else{
        return x;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,x,y;
	    cin>>n>>k>>x>>y;
	    cout<<min(n*x,(k*x+(n-k)*y))<<endl;
	}
	
	return 0;
}
