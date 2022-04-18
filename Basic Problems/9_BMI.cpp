//Vaishnavi-Waghmale
#include <bits/stdc++.h>
using namespace std;

int main() {
    
	int T;  //Testcases
    cin>>T;
    
    for(int i=0; i<T; i++){
        int H, M;   //H=height and M=mass
        cin>>M>>H;
        int B;      //B= Body mass index
        B=(M/(H*H));
        
        if(B<=18){
            cout<<"1"<<endl;  //Underweight 
        }
        else if(19<=B && B<=24){
            cout<<"2"<<endl;    //Normal weight
        }
        else if(25<=B && B<=29){
            cout<<"3"<<endl;   //Overweight
        }
        else if(B>=30){
            cout<<"4"<<endl;  //Obesity
        
    }
	return 0;
}
