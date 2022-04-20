//Vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {

	int T;  //Testcases
	cin>>T;
	
	for(int i=0; i<T; i++){
	    int Z, Y, A, B, C; //Z-total amount Y-amount spent  A,B,C-fees for different sports
	    cin>>Z>>Y>>A>>B>>C;
	    
	    int X= Z-Y;
	    int S= A+B+C;
	    
	    if(S<=X){
	        cout<<"Yes"<<endl;   //Possible to play all the sports
	    }
	    else{
	        cout<<"No"<<endl;    //Not Possible to play all the sports
	    }
	}
	return 0;
}