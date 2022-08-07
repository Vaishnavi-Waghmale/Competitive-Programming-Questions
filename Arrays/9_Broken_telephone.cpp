#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,a[10000000],i,k;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    k=0;
	    for(i=1;i<n;i++)
	    {
	        if(a[i-1]!=a[i])
	        {
	            k=k+2;
	        }
	    }
	    for(i=0;i<n-2;i++)
	    {
	        if(a[i]!=a[i+1] && a[i+1]!=a[i+2])
	        {
	            k--;
	        }
	    }
	    cout<<k<<"\n";
	}
	return 0;
}
