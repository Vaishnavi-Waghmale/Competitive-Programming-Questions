#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,i=1;
	    cin>>a>>b;
	    while(a>=0 && b>=0){
	        if(i%2!=0){
	            a=a-i;
	            i++;
	        }
	        else{
	            b=b-i;
	            i++;
	        }
	    }
	    if(a>=0){
	        cout<<"Limak"<<endl;
	    }
	    else{
	        cout<<"Bob"<<endl;
	    }
	}
	return 0;
}
