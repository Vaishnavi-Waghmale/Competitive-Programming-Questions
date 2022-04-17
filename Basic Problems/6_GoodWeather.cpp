//Vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {
    
	int T;//Testcases
	cin>>T;
	
	for(int i=0; i<T; i++){
	    int arr[7];
	    int sunny=0, rainy=0;
	    for(int j=0; j<7; j++){
	        cin>>arr[j];    //input 1 for sunny and 0 for rainy
	        arr[j] == 1 ? sunny++ : rainy++;
	        
	     }   
	        if(sunny > rainy ){
	            cout<<"Yes"<<endl;  //Good Weather
	        }
	        else{
	            cout<<"No"<<endl;    //not Good Weather
	        }
	    
	    
	}
	return 0;
}