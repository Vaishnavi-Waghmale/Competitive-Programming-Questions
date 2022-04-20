#include <iostream>
using namespace std;

int main() {
    
	int T;
    cin>>T;
    
    for(int i=0; i<T; i++){
        int k;  //the number of seconds after which Faizal's position is to be calculated
        int j,steps=0;
        cin>>k;    //in 1st second faisal goes 3 step forward and in 2nd second he gets 1 step backwards and so on..
        for(j=1;j<=k;j++)
        {
            if(j%2==0)
            {
                steps-=1;
            }
            else
            {
                steps+=3;
            }
        }
        cout<<steps<<endl; 
    }
	return 0;
}