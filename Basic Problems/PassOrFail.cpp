//Vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {

	int T;//Test cases
	cin>>T;
	int N, X, P; //N- No. of questions, X-No. of correct question, P-Passing Marks
	for(int i=0; i<T; i++){
	    cin>>N>>X>>P;
        int O;
        O = X*3-(N-X);   //O-Total obtained marks
	    
	    if(O<P){
	        cout<<"Fail"<<endl;
	    }
	    else{
	        cout<<"Pass"<<endl;
	    }
	    
	}
    
	return 0;
}