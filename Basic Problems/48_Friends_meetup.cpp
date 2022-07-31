#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int a,b;
        cin>>a>>b;
        
        if(a==b || a>b){
            cout<<"Yes"<<endl;
        }
        else if(a<b){
            cout<<"No"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
	return 0;
}
