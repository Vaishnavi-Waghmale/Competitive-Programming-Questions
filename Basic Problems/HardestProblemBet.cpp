//Vaishnavi Waghmale
#include <iostream>
using namespace std;

int main() {
	int T;//Test-cases
	cin>>T;
	
	for(int i=0; i<T; i++){
	    int a, b, c; 
	    cin>>a>>b>>c; //a=no of sucessful submission of que-A   b=no of sucessful submission of que-B     c=no of sucessful submission of que-C
	    if(a<b && a<c){
	        cout<<"Draw"<<endl;    ////que-A is the hardest
	    }
	    else if(b<a && b<c){
	        cout<<"Bob"<<endl;   //que-B is the hardest
	    }
	    else{
	        cout<<"Alice"<<endl;   //que-C is the hardest
	    }
	}
	return 0;
}