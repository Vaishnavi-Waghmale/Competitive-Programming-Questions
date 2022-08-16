#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    int res = 0;
	    sort(a,a+n);
	    for(int i=0;i<n;i++){
	        if(a[i]!=a[i+1]) res++;
	    }
	    cout<<res<<endl;
	}
	return 0;
