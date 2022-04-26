//Vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        bool c1,c2,c3;
        cin>>c1>>c2>>c3;
        bool h1,h2,h3;
        cin>>h1>>h2>>h3;
        int c = c1+c2+c3;  //correct ans =c, heros ans=h
        int h = h1+h2+h3;
        
        if(c==h){
            cout<<"Pass"<<endl;
        }
        else{
            cout<<"Fail"<<endl;
        }
        
    }
	return 0;
}