//Vaishnavi-Waghmale
#include <iostream>
using namespace std;
int sum(int,int);
int main() {
    int t;
    cin>>t;
    while(t--){
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
    }
	return 0;
}
int sum(int d, int n ){
    int i;
    for(i=1;i<=d;i++){
      n=n*(n+1)/2;  
    }
    return(n);
}