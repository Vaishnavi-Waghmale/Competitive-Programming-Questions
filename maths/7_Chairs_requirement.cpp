#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        
        if(x>y){
            int ans;
            ans = x-y;
            cout<<ans<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
	return 0;
}
