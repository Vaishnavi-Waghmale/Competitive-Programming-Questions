#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = (1e9) + 7;
void solve(){
    ll n;
    cin>>n;
    ll sum =0;
    vector<ll>v(n);
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        sum  = (sum + x) % mod;
    }
    ll q;
    cin>>q;
    while(q--){
        sum = (sum * 2) % mod;
        sum = (sum + mod) % mod;
        cout << sum << "\n";
    }
    
    
}
int main() {
    solve();
	// your code goes here
	return 0;
}
