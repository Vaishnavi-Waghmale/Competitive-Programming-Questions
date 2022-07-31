#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        double a;
        a=(0.143*n);
        double x=pow(a,n);
        
        cout<<round(x)<<endl;
    }
	return 0;
}
