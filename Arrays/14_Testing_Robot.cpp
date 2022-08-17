#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int point=0;
        string s;
        cin>>s;
        int mi=0;
        int mx=0;
        
        for(int i=0; i<n; i++){
            if(s[i]=='R'){
                point++;
            }
            else {
                point--;
            }
            
            mx = max(mx, point);
            mi = min(mi, point);
        }
        cout<<mx-mi+1<<endl;
        
        
    }
	return 0;
}
