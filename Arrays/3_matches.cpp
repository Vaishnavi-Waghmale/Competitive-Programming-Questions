//Vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {
    int T, a, b, c=0, d=0, m=0, t=0;//m-mathes for that int and t= total mathes forthe answer
            
    cin>>T;
    
    while(T--){
        cin>>a>>b;
        t=0;
        c=a+b;
        
        while(c>0){
             
            d=c%10;
            if (d==0){
                m=6;
            }
            else if(d==1){
                m=2;
            }
            else if(d==2){
                m=5;
            }
            else if(d==3){
                m=5;
            }
            else if(d==4){
                m=4;
            }
            else if(d==5){
                m=5;
            }
            else if(d==6){
                m=6;
            }
            else if(d==7){
                m=3;
            }
            else if(d==8){
                m=7;
            }
            // else if(d==9){
            //     m=6;
            // }
            else{
                m=6;
            }
            t=t+m;
            c=c/10;
        }
        cout<<t<<endl;
    }
	return 0;
}