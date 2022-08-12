#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int check=0;
        
        for(int i=1; i<=x; i++){
            for(int j=1; j<=x; j++){
                int ans;
                ans= 2*i + 2*j + i*j;
                
                if(ans==x){
                    check=1;
                    break;
                }
                
            }
        }
        
        if(check==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
	return 0;
}
