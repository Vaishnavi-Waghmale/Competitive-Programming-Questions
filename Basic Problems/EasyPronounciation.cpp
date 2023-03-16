#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a;
	    cin>>a;
	    int count=0;
	    int check=0;
	    for(int i=0; i<n; i++){
	        if(a[i]== 'a' || a[i]== 'e' || a[i]== 'i' || a[i]== 'o' || a[i]== 'u'){
                count=0;
	        }
	        else{
	            count++;
	        }
	        if(count>3) check =1;
	    }
	    if(check == 1) cout<<"NO"<<endl;
	    else cout<<"YES"<<endl;
	    
	}
	return 0;
}
