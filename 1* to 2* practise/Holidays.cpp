#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t,w,r,a[102],c,s;
    cin>>t;
    while(t--)
    {
        cin>>w>>r;
        c=w;s=0;
        for(int i=0;i<w;i++)
        cin>>a[i];
        sort(a,a+w);
        for(int i=0;i<w;i++)
        {
            s=s+a[w-1-i];
            c--;
            if(s>=r)break;
        }
        cout<<c<<"\n";
    }
    
	// your code goes here
	return 0;
}
