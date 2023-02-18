
#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    int divisions = n * factorial(n-1);
    
    return divisions;
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int ans = factorial(n);
	
	cout<<ans<<endl;
	return 0;
}
