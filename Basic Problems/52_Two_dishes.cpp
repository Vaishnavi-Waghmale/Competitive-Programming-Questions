#include <iostream>
using namespace std;

int main() {
	int t,n,a,b,c,d;
	cin>>t;
	while(t>0)
	{
	    d=0;
	    cin>>n>>a>>b>>c;
	    while(a!=0 && b!=0)
	    {
	        d++;
	        a--;
	        b--;
	        if(d==n)
	        {
	            cout<<"YES"<<endl;
	            break;
	        }
	    }
	    if(d!=n)
	    {
	        while(b!=0 && c!=0)
	        {
	            d++;
	            b--;
	            c--;
	            if(d==n)
	            {
	                cout<<"YES"<<endl;
	                break;
	            }
	        }
	        if(d!=n)
	        cout<<"NO"<<endl;
	    }
	    t--;
	}
	return 0;
}
