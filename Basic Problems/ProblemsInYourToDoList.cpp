#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while (T--){
	    int N, count=0;
	    cin>>N;
	    int a[N];
	    for(int i=0; i<N; i++){
	        cin>>a[i];
	    }
	    
	    for(int i=0;i<N;i++)
	    {
	        if(a[i]>=1000)
	        {
	            count ++;
	        }
	        
	    }
	    cout<<count<<endl;
	}
	return 0;
}
