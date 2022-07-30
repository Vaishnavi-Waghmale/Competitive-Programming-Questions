#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    float x=(n*1.414)/a;
	    float y=(n*2.0)/b;
	    if(x>y)
	    cout<<"Elevator"<<endl;
	    else
	    cout<<"Stairs"<<endl;
	}
	return 0;
}
