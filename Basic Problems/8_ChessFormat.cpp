//Vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {
    int T;  //Testcases
    cin>>T;
    for(int i=0; i<T; i++){
        int a, b;
        cin>>a>>b;
        int c=a+b;
        
        if(c<3){
            cout<<"1"<<endl;  //Bullet
        }
        else if(3<=c && c<=10){
            cout<<"2"<<endl;   //Blitz
        }
        else if(11<=c && c<=60){
            cout<<"3"<<endl;   //Rapid
        }
        else if(c>60){
            cout<<"4"<<endl;   //Classical
        }


    }
	return 0;
}