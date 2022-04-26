//Vaishnavi-waghmale
#include <iostream>
using namespace std;

int main() {
    
	int t;
	cin>>t;
	while(t--){
	    int d,l,r;
	    cin>>d>>l>>r;
	    if(d<l) cout << "Too Early" << endl;
	    else if(l<=d && d<=r ) cout << "Take second dose now" << endl;
	    else cout << "Too Late" << endl;
	}
	return 0;
}
