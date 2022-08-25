#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while ( t -- )
	{
	    int n;
	    cin >> n;
	    int *x = new int [n];
	    for ( int i = 0; i < n; i ++ ) cin >> x[i];
	    int max = 0, min = 8, curr = 1;
	    for ( int i = 1; i < n; i ++ )
	    {
	        if ( abs( x[i] - x[i - 1] ) <= 2 ) curr ++;
	        else
	        {
	            if ( curr > max ) max = curr;
	            if ( curr < min ) min = curr;
	            curr = 1;
	        }
	    }
        if ( curr > max ) max = curr;
        if ( curr < min ) min = curr;
	    cout << min << ' ' << max << endl;
	}
	return 0;
}
