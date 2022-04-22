//Vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int a,b,c,x,y,z;
        cin>>a>>b>>c>>x>>y>>z;
        int m=a+b+c;
        int n=x+y+z;
        
        if(m>n){
            cout<<1<<endl;
        }
        else if(m<n){
            cout<<2<<endl;
        }
        
    }
	
	return 0;
}