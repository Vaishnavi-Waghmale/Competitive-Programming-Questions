#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    ll n;
    cin>>n;
    
    vector<ll> boy(n);
    vector<ll> girl(n);
    
    for(ll i = 0; i < n; i++) {
        cin >> boy[i];
    }
    for(ll i = 0; i < n; i++) {
        cin >> girl[i];
    }
    
    sort(boy.begin(), boy.end());
    sort(girl.begin(), girl.end(), greater<int>());
    // reverse(girl.begin(), girl.end());
    
    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        ans = max(ans, boy[i] + girl[i]);
    }
    cout << ans << endl;
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        solve();
        
    }
	return 0;
}
