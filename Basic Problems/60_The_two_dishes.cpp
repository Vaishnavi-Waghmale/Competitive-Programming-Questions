#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,s;
	    cin>>n>>s;
	    long long int x=abs(s-n);
	    cout<<n-x<<endl;
	}
	return 0;
}
