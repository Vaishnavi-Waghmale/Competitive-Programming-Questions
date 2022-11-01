#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x1,y1,x2,y2,k;
	    cin>>x1>>y1>>x2>>y2>>k;
	    int min_steps = abs(x2-x1) + abs(y2-y1);
	    if((k-min_steps)%2==0 &&(k-min_steps)>=0){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
