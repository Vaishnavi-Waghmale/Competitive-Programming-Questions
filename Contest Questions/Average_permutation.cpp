#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n;
	    deque<int>q ;
	    for(int i=1; i<=n; i++){
	        if(i%2){
	            q.push_back(i);
	        }
	        else{
	            q.push_front(i);
	        }
	    }
	    for(auto i:q){
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
