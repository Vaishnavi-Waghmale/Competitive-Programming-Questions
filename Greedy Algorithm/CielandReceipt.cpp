//Vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int p;
        cin>>p;
        
        int count=0;
        
        int j=p/2048;
        p=p%2048;
    
        while(p>=1)
        {
            
            j+=p%2;
             p=p/2;
        }
        cout<<j<<endl;
    }
	return 0;
}
