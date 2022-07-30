#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            int sum=0,product=1;
            for(int j=i;j<n;j++){
                sum+=a[j];
                product*=a[j];
                if(sum==product){
                    count+=1;
                }
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
