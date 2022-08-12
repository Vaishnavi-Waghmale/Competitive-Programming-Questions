#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int d=0;
        int check=0;
        if(a==b){
            cout<<"Yes"<<endl;
            continue;
        }
        for(int i=0; i<100; i++){
            if(a>b){
                while(b<a){
                    check=1;
                    b*=2;
                }
                if(b==a){
                    d=1;
                    break;
                }
            }
            if(check==0){
                
                if(a<b){
                    while(b>a){
                        a*=2;
                    }
                    if(a==b){
                        d=1;
                        break;
                    }
                }
            }
        }
        if(d==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
	return 0;
}
