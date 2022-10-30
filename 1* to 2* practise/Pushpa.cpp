#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int a[n],i,c=0,h=0;
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int mh=a[n-1];
	    for(i=0;i<n;i++){
	        if(a[i]==a[i+1]){
	            c++;
	        }
	        if(a[i]!=a[i+1]){
	            h=a[i]+c;
	            if(h>mh){
	                mh=h;
	            }
	            c=0;
	        }
	    }cout<<mh<<endl;
	    
	}
	return 0;
}
