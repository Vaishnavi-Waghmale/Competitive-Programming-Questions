#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string arr[n];
	    int a=0,b=0;
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        if(arr[i]=="START38"){
	            a++;
	        }
	        else if(arr[i]=="LTIME108"){
	            b++;
	        }
	    }
	    cout<<a<<" "<<b<<endl;
	}
	return 0;
}
