//Vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {
    int T;  //Testcases
    cin>>T;
    
    while(T--){
        bool a,b,c;  //1- right shoe and 0- for left shoe
        cin>>a>>b>>c;
        
        if(a==0 && (b==1 || c==1)){
            cout<<1<<endl;
        }
        else if(b==0 && (a==1 || c==1)){
            cout<<1<<endl;
        }
        else if(c==0 && (a==1 || b==1)){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
	return 0;
}