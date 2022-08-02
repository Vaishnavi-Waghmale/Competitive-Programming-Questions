#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int test,N,sumN,counttest=0,countN=0,result=0;
	    cin>>test>>N>>sumN;
	    while(counttest<test)
	    {
	        counttest++;
	        if(N>sumN)
	        {
	            result=result+(sumN*sumN);
	            sumN=0;
	            countN+=sumN;
	            break;
	        }
	        else
	        {
	            result=result+(N*N);
	            sumN=sumN-N;
	            countN+=N;
	        }
	        
	    }
	    cout<<result<<endl;
	}
	return 0;
}
