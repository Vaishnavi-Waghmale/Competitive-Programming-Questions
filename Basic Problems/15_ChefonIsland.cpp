//Vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    for(int i=0; i<T; i++){
        int x, y, xr, yr, D;     //x=total units of food supply   y=total units of water supply
        cin>>x>>y>>xr>>yr>>D;     //xr= daily units of food supply needed to survive    yr=daily units of water supply needed to survive
                                  //D= No of days required to reach at shore.
        if((xr*D)<=x && (yr*D)<=y){
	        cout<<"Yes"<<endl;     //food and wather will be sufficient
	    }
	    else{
	        cout<<"No"<<endl;       ////food and wather will not be sufficient
	    }
    }
	return 0;
}