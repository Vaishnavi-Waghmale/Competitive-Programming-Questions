#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int b=1;b<=a;b++){
	    int x,y,t;
	    cin>>x>>y;
	    if((x==0 && y%2==1) || (x%2==1 && y==0) ){
	        cout<<"NO"<<endl;
	        
	    }
	    else{
	    t=x+2*y;
	    if(t%2==0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    }
	}
	return 0;
}
