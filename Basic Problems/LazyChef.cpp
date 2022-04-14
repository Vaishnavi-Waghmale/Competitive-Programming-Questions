//Vaishnavi-Waghmale
#include <iostream>
#include<climits>
using namespace std;

int main() {
	int T;//Test cases
	cin>>T;
	
	while(T--){
	    int x, m, d; //x=time to complete task  m=chef takes m units of x to complete the task   d=delay
	    cin>>x>>m>>d;
	    
	    cout<<min(x*m, x+d)<<endl;
	}
	return 0;
}