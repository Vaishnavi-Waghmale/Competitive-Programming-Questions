//Vaishnavi-Waghmale
#include <stdio.h>
#include<iostream>
using namespace std;

int main(void) {
    int T;  ///Testcases
    cin>>T;
    
    while(T--){
        int n, k;
        cin>>n>>k;   
        
        int count=0;
        for(int i=0; i<n; i++){
            int h;  //height of each person
            cin>>h;
            
            if(h>k){
                count++;
            }
                
        }
        cout<<count<<endl;
    }
	return 0;
}