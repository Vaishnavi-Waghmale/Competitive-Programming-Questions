#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--){
	    long long int n,x;
    bool b = true;
    cin>>n>>x;
    long long int p,q,i;
    cin>>q;
    for( i = 1;i<n;i++){
        cin>>p;
        if(p>=q){
            q = p;
        }
        else if(p+q>x){
            b = false;
        }
    }
    if(b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
