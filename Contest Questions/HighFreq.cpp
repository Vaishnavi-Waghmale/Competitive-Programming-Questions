#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1]={0};
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            a[temp]++;
        }
        for(int i=0; i<2; i++){
            for(int j=0; j<n-i; j++){
                if(a[j]>a[j+1]){
                    swap(a[j],a[j+1]);
                }
            }
        }
        int p ;
        if(a[n]%2){
            p=a[n]/2+1;
        }
        else{
            p=a[n]/2;
        }
        cout<<max(a[n-1],p)<<endl;
    }
	return 0;
}
