//Vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    for(int i=0; i<T; i++){
        int a, b;  //a= solid substance  and b= liquid substance
        cin>>a>>b;
        
        if(a>0 && b>0){
            cout<<"Solution"<<endl;
        }
        else if(a>0 && b<=0){
            cout<<"Solid"<<endl;   //b=0 ie.no liquid
        }
        else if(a<=0 && b>0){
            cout<<"Liquid"<<endl;   //a=0 ie. no solid
        }

    }
	return 0;
}