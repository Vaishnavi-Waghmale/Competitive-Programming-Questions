//Vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {
    int T; //Testcases
    cin>>T;
    
    for(int i=0; i<T; i++){
        int x1 , x2, y1, y2, z1, z2;
        cin>>x1>>x2>>y1>>y2>>z1>>z2;
        
        if(x1<=x2 && y1<=y2 && z1>=z2){
            cout<<"Yes"<<endl;     //will get visa
        }
        else{
            cout<<"No"<<endl;      //will not get visa
        }
    }
	return 0;
}