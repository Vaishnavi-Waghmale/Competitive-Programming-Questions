#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int temp;
	    temp= (a+b)/2;
	    int Max;
	    Max= max(a,b);
	    cout<<abs(temp-Max)<<endl;
	}
	return 0;
}
