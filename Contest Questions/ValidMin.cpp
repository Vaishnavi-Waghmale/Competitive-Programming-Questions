#include <bits/stdc++.h>


#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define ull unsigned long long
#define ld long double
#define vt vector
#define pb push_back
#define pob pop_back
#define all(c) c.begin(),c.endl()
#define each(x, a) for (auto x:a)
#define sz(x) (ll)(x).size()
using namespace std;

void solve(){
    int a,b,c;
    string ans = "NO";
    cin>>a>>b>>c;
    int d =min(min(a,b),min(b,c));
    if(a==b && a==d){
        ans="YES";
    }
    else if(a==c && a==d){
        ans="YES";
    }
    else if(b==c && b==d){
        ans="YES";
    }
    cout<<ans<<endl;
}
int main() {
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
