//Vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int D,d,a,b,c;
	    cin>>D>>d>>a>>b>>c;
	   int s=D*d;
	   if(s>=42){
	       std::cout << c << std::endl;
	   }
	   else if(s>=21){
	       std::cout << b << std::endl;
	   }
	   else if(s>=10) {
	       std::cout << a << std::endl;
	   }
	   else{
	       std::cout << "0" << std::endl;    
	   }
	}
	return 0;
}