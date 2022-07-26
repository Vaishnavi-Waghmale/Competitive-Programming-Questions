#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int n;
	    int count1=0;
	    int count2=0;
	    cin>>n;
	    string arr[n];
	    for(int j=0; j<n; j++){
	        cin>> arr[j];
	    }
	    for (int j=0; j<n; j++){
	        if(arr[j]=="START38"){
	            count1++;
	        }
	        else{
	            count2++;
	        }
	    }
	    cout<<count1<<" "<<count2<<endl;
	}
	return 0;
}
