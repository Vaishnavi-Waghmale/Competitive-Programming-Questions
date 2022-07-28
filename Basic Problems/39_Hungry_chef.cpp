#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	for(int i=0;i<T;i++){
	    int X,Y,N,R;
	    cin >> X >> Y >> N >> R;
	    int x=0,y=0;
	    if(R<N*X) {
	        cout << "-1" << endl;
	        continue;
	    }
	    int temp = (R-(N*X))/(Y-X);
	    if(temp<N) y=temp;
	    else y=N;
	    x = N-y;
	    cout << x << " " << y << endl;
	}
	return 0;
}
