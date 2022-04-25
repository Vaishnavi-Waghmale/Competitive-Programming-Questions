//Vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int h,x,y,c;
        cin>>h>>x>>y>>c;
        if(h*(x+y/2) <= c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
	return 0;
}