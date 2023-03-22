#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int count0=0;
	int count1=0;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int sum=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        sum=sum+arr[i];
	    }
	    if(sum%2==0)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	
	return 0;
}
