//Vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {
    int T; //Testcases
    cin>>T;
    
    for(int i=0; i<T; i++){
        int x;  //Problem rating
        cin>>x;
        
        if(1<=x && x<100){
            cout<<"Easy"<<endl;   //easy problem
        }
        else if(100<=x && x<200){
            cout<<"Medium"<<endl;   //Medium problem
        }
        else if(200<=x && x<=300){
            cout<<"Hard"<<endl;     //Hard problem
        }
    }
	return 0;
}