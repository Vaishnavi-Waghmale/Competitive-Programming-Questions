#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long ans=0;
	    long long a=0,b=0,c=0;
	    
	    for(int i=0;i<3;i++)
	    {
	        long long x,y,z;
	        cin>>x>>y>>z;
	        a+=x,b+=y,c+=z;
	        long long sm=(x+y+z);
	        sm=sm-(sm+1)%2;
	        ans=max(ans,sm);
	    }
	    a=a-(a+1)%2;
	    ans=max(ans,a);
	    b=b-(b+1)%2;
	    ans=max(ans,b);
	    c=c-(c+1)%2;
	    ans=max(ans,c);
	    cout<<ans<<endl;
    }
	return 0;
}
