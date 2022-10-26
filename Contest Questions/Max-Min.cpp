#include <iostream>
#include<algorithm>
using namespace std;


int largestNumber(int a, int b, int c){
    int max;
    if (a >= b && a >= c){
        max = a;
    }
    else if (b >= a && b >= c){
        max = b;
    }
    else{
        max = c;
    }
    return max;
}

int smallestNumber(int a, int b, int c){
    int min;
    if (a < b && a < c) {
        min = a;

    } else if (b < a && b < c)  {
       min =  b;

    } else {
      min = c;

     }
     return min;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    largestNumber(a,b,c);
	    smallestNumber(a,b,c);
	    int res = largestNumber(a,b,c) - smallestNumber(a,b,c);
	    cout<<res<<endl;
	    
	}
	return 0;
}
