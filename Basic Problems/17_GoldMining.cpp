//Vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {
    int T; //Testcases
    cin>>T;
    
    for (int i=0; i<T; i++){
        int n, x, y;   //N-No of chef's friends  x=Total KG gold  y=Capacity to carry Y Kg of gold per friend
        cin>>n>>x>>y;
        
        int p= n+1;  //p=Total no of people going to mine including chef
        
        if(p*y>=x){
            cout<<"Yes"<<endl;  // Chef and his friends together be able to carry up all the gold from the gold mine
        }
        else{
            cout<<"No"<<endl;   // Chef and his friends together not be able to carry up all the gold from the gold mine
        }

    }
	return 0;
}
