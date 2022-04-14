//Vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {
	int T;//Test-cases
	cin>>T;
	
	for(int i=0; i<T; i++){
	    int m, n, k;   //m=minutes left to start exam   n=No of episodes of super-chef    k=duration of each episode in minutes
	    cin>>m>>n>>k;
	    
	    if(n*k < m){
	        cout<<"Yes"<<endl;  //possible to watch all episodes before starting exam
	    }
	    else{
	        cout<<"No"<<endl;    //Not possible to watch all episodes before starting exam
	    }
	}
	return 0;
}