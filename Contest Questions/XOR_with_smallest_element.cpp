#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,x,y,t;
priority_queue<pair<int, int>>g,nul;
map<int, vector<int>>k;
void oppo(){
    while(!g.empty()){
        cout<<-g.top().first<<' ';
        g.pop();
    }
    cout<<endl;
}
void solve(){
    g=nul;
    k.clear();
    cin>>n>>x>>y;
    for(int i=1; i<=n; ++i){
        cin>>t;
        g.push({-t, i});
    }
    for(int i=1; i<=y; ++i){
        pair<int, int> _={-((-g.top().first)^x),g.top().second};
        k[g.top().second].push_back(i);
        if(k[g.top().second].size()==4){
            int s=k[g.top().second][3]-k[g.top().second][1];
            i+=(y-i)/s*s;
            for(;i<=y;++i){
                pair<int, int> t={-((-g.top().first)^x),g.top().second};
                g.pop();
                g.push(t);
            }
            oppo();
            return;
        }
        g.pop();
        g.push(_);
    }
    oppo();
}
signed main() {
    int T;
    cin>>T;
    while(T--){
        solve();
    }
	return 0;
}
