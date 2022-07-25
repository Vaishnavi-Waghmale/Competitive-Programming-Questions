#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    if(n %2 == 0 && m %2 == 0 )
	     cout<<0<<endl;
	    else if(n%2 == 1 && m%2 == 1)
	     cout<<n+m-1<<endl;
	    else if(n%2 == 1)
	     cout<<m<<endl;
	    else 
	     cout<<n<<endl;
	}
	return 0;
}
