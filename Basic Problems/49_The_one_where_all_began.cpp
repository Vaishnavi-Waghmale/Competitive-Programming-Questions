#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        if(n>=21)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
        t--;
    }
	return 0;
}
