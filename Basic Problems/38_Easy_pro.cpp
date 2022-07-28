#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int x=0,ans=1;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]!='a'&&s[i]!='e'&&s[i]!='o'&&s[i]!='i'&&s[i]!='u')	        
	        x++;
	        else 
	        x=0;
	        if(x>3)
	        {
	            ans=0;
	            break;
	        }
	    }
	    if(ans)
	    cout<<"YES";
	    else
	    cout<<"NO";
	    cout<<"\n";
	}
	return 0;
}
