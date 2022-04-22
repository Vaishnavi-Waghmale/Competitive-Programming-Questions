//Vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {
    int T;  //Testcases
    cin>>T;
    for(int i=0; i<T; i++){
        int x;    // No of seconds after which we have to calculate the direction..
        cin>>x;
        if(x%4==0){
            cout<<"North"<<endl;
        }
        else if(x%4==1){
            cout<<"East"<<endl;
        }
        else if(x%4==2){
            cout<<"South"<<endl;
        }
        else if(x%4==3){
            cout<<"west"<<endl;
        }
    }
	return 0;
}
