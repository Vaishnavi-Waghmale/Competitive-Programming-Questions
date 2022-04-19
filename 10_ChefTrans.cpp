//Vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {
    
    int T;  //Testcases
    cin>>T;
    
    for(int i=0; i<T; i++){
        int X, Y, Z;
        cin>>X>>Y>>Z;   // Time to reach at chefland   X-Plane  Y-Bus  Z-Train
        int C;
        C=X+Y;
        
        if(C > Z){
            cout<<"TRAIN"<<endl;
            
        }
        else if(C < Z){
            cout<<"PLANEBUS"<<endl;
        }
        else if(C = Z){
            cout<<"EQUAL"<<endl;
        }
    }
	return 0;
}