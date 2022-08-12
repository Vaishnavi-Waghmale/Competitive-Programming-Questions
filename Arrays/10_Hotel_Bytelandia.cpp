#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],b[n];
	   
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	       cin>>b[i];
	    }
	     vector<int> v(1001, 0);
	    for(int i=0;i<n;i++){
	        for(int j=a[i];j<b[i];j++){
	            v[j]++;
	        }
	    }

	        sort(v.begin(),v.end());
	         std::cout << v[v.size()-1] << std::endl;
	         }
	return 0;
}
