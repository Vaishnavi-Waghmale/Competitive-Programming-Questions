#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        
        int ans;
        ans = std::max(a,b) + std::max(c,d);
        cout<<ans<<endl;
        
        
    }
    
	return 0;
}
