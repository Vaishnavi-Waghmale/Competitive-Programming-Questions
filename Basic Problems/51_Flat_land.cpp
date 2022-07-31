#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0;
	    int rem=n;
	    while(rem)
	    {
	     int a=sqrt(rem);
	     rem=rem-a*a;        
	     count++; 
	        
	    }
	    if(rem==1)
	   cout<<count++<<endl;
	    else if(rem==0)
	    cout<<count<<endl;
	}
	return 0;

    
}
