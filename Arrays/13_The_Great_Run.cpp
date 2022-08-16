#include<bits/stdc++.h>

using namespace std;

int main() {
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int sum=0;
        int max=0;
         max=INT_MIN;
        for(int i=0; i<n; i++){
            sum=0;
            for(int j=i; j<k+i&&j<n; j++)
            {
            sum+=a[j];
            if(sum>max)
                max = sum;
        }
        }
        cout<<max<<endl;
    }
	return 0;
}
