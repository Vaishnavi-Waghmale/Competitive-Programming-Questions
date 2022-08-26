#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,d,n,l,k,m,i;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k>>l;m=INT_MIN;
	    vector <int> a;
	    for(i=0;i<n;i++)
	    {
	        cin>>d; a.push_back(d);
	        if(i<(n-1))
	        m=max(d,m);
	       
	    }
	    if(k>=0)
	    {
	        if((a[n-1]+(l-1)*k)>m) 
	        {cout<<"Yes"<<endl;continue;}
	        else
	        {cout<<"No"<<endl;continue;}
	    }
	    else
	    {
	         if(a[n-1]>m) 
	        {cout<<"Yes"<<endl;continue;}
	        else
	        {cout<<"No"<<endl;continue;}
	    }
	}
	return 0;
}
