#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
	    int n;
	    cin>>n;
	    cin>>s;
	    int flag=0;
	    int i;
	    for( i=0;i<n;++i)
	    {
	        if(s[i]=='Y')
	        flag=1;
	        if(s[i]=='I')
	         break;
	        
	    }
	    
	    if(i<n)
	    cout<<"INDIAN"<<endl;
	    else if(flag==1)
	    cout<<"NOT INDIAN"<<endl;
	    else 
	    cout<<"NOT SURE"<<endl;
        
    }
	return 0;
}
