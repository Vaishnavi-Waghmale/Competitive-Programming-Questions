#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        double x;
        cin>>x;
        if(x<=100){
            cout<<x<<endl;
        }
        else if(100<x && x<=1000){
            double ans;
            ans=x-25;
            cout<<ans<<endl;
        }
        else if(1000<x && x<=5000){
            double ans1;
            ans1 = x-100;
            cout<<ans1<<endl;
        }
        else if(5000<x && x<=10000){
            double ans2;
            ans2 = x-500;
            cout<<ans2<<endl;
        }
    }
	return 0;
}
