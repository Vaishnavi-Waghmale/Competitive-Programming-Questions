//vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        bool  a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;   //scores
        cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8>>a9>>a10;
        
        int T1 = a1+a3+a5+a7+a9;
        int T2 = a2+a4+a6+a8+a10;
        
        if(T1>T2){
            cout<<1<<endl;
        }
        else if(T1<T2){
            cout<<2<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
	return 0;
}