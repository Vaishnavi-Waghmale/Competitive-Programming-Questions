//Vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    for(int i=0; i<T; i++){
        int X, Y, Z;
        cin>>X>>Y>>Z;
        
        if(X+Y <= Z){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}